#include "stdafx.h"

#include <iostream>
#include <armadillo>
#include <cassert>
#include <cmath>
#include <vector>
#include <boost\thread.hpp>
#include <boost\thread\mutex.hpp>

#define USE_AVX
#define USE_SSE2

#include "lcg.h"
#include "UtilTool.h"

using namespace UtilTool;

using namespace std;
using namespace arma;

boost::mutex io_mutex;

// Armadillo documentation is available at:
// http://arma.sourceforge.net/docs.html

// NOTE: the C++11 "auto" keyword is not recommended for use with Armadillo objects and functions

static void normaldistf_boxmuller_sse2(float* data, size_t count) {
	assert(count % 8 == 0);
	const __m128 twopi = _mm_set1_ps(2.0f * 3.14159265358979323846f);
	const __m128 one = _mm_set1_ps(1.0f);
	const __m128 minustwo = _mm_set1_ps(-2.0f);

	LCG<__m128> r;
	for (size_t i = 0; i < count; i += 8) {
		__m128 u1 = _mm_sub_ps(one, r()); // [0, 1) -> (0, 1]
		__m128 u2 = r();
		__m128 radius = _mm_sqrt_ps(_mm_mul_ps(minustwo, log_ps(u1)));
		__m128 theta = _mm_mul_ps(twopi, u2);
		__m128 sintheta, costheta;
		sincos_ps(theta, &sintheta, &costheta);
		_mm_store_ps(&data[i], _mm_mul_ps(radius, costheta));
		_mm_store_ps(&data[i + 4], _mm_mul_ps(radius, sintheta));
	}
}

LCG<__m256> r;
static void normaldistf_boxmuller_avx(float* data, size_t count) {
	assert(count % 16 == 0);
	const __m256 twopi = _mm256_set1_ps(2.0f * 3.14159265358979323846f);
	const __m256 one = _mm256_set1_ps(1.0f);
	const __m256 minustwo = _mm256_set1_ps(-2.0f);

	for (size_t i = 0; i < count; i += 16) {
		__m256 u1 = _mm256_sub_ps(one, r()); // [0, 1) -> (0, 1]
		__m256 u2 = r();
		__m256 radius = _mm256_sqrt_ps(_mm256_mul_ps(minustwo, log256_ps(u1)));
		__m256 theta = _mm256_mul_ps(twopi, u2);
		__m256 sintheta, costheta;
		sincos256_ps(theta, &sintheta, &costheta);
		_mm256_store_ps(&data[i], _mm256_mul_ps(radius, costheta));
		_mm256_store_ps(&data[i + 8], _mm256_mul_ps(radius, sintheta));
	}
}

#define YEAR_DAYS 360
#define MONTH_DAYS 30

void GetBMPPrice(double S, double T, double u, double vol, int n_samples, int index, mat* mats)
{
	//cout << "GetBMPPrice " << index << " " << n_samples << endl;
	auto t1 = HighPreciseTickCounter::GetMillSecCounter();

	CONST long long M = n_samples;
	CONST long long N = (long long)(T * YEAR_DAYS);

	long long NN = N;
	if (N % 16 != 0)
		NN += 16 - (N % 16);

	auto gap = T / N;
	auto dt0 = gap;
	rowvec dt(NN);
	for (int i = 0; i < NN; i++)
		dt(i) = dt0 + i * gap;

	//auto t1 = HighPreciseTickCounter::GetMillSecCounter();
	mat prc(M, NN + 1, fill::value(S));
	mat rdm(M, NN, fill::zeros);
	for (int i = 0; i < M; i++)
	{
		float* x = new float[NN];
		normaldistf_boxmuller_avx(x, NN);
		float sum = 0;
		for (int j = 0; j < NN; j++)
		{
			//sum += x[j + i * N];
			sum += x[j];
			rdm(i, j) = sum;
		}
		delete[] x;
	}

	//auto tt1 = HighPreciseTickCounter::GetMillSecCounter();

	auto& W = rdm;
	auto d1 = (mat)(W * sqrt(T / N) * vol);
	auto d2 = (u - 1 / 2.0 * vol * vol) * dt;
	prc(0, 1, size(M, NN)) = (mat)(S * arma::exp(d1.each_row() + d2));
	//prc(0, 1, size(M, NN)) = (mat)(S * arma::exp(((mat)(W * sqrt(T / N) * vol)).each_row() + (u - 1 / 2.0 * vol * vol) * dt));

	//auto tt2 = HighPreciseTickCounter::GetMillSecCounter();
	//auto cost = HighPreciseTickCounter::GetTimeDiffMillSec(tt1, tt2);
	//::printf("%d calc Cost:%.6fs\n", index, cost);

	//prc(0, 600, size(30, 10)).print();

	mats[index] = prc(0, 0, size(M, N + 1));

	auto t2 = HighPreciseTickCounter::GetMillSecCounter();
	auto cost = HighPreciseTickCounter::GetTimeDiffMillSec(t1, t2);
	::printf("%d rdm Cost:%.6fs\n", index, cost);
}

double mc_value(double s0, int tdays, int tsb, double u, double vol, double rf, double r_out, double r_in, double out_return, int n_samples = 200000, int s = 0)
{
	double T = (double)tdays / YEAR_DAYS;
	double ts = (double)tsb / tdays;
	auto up_out_price = s0 * r_out;
	auto down_in_price = s0 * r_in;

	auto mu = rf - u;
	if (s == 0)
		s = s0;

	//auto prc = GetBMPPrice(s, T, mu, vol, n_samples);

	int threadCnt = 8;
	auto num = (int)(n_samples / threadCnt);
	mat prc(n_samples, tdays + 1, fill::zeros);
	//vector<boost::thread> thrds;
	//int sum = 0;
	//for (int i = 0; i < threadCnt; i++)
	//{
	//	auto n_s = num;
	//	if (i == threadCnt - 1)
	//		n_s = n_samples - sum;
	//	boost::thread t(GetBMPPrice, s, T, mu, vol, n_s, mats);
	//	thrds.push_back(t);
	//}
	//for (int i = 0; i < thrds.size(); i++)
	//{
	//	auto t = thrds[i];
	//}

	mat* mats = new mat[threadCnt];
	int tn = 0;
	boost::thread t1(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t2(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t3(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t4(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t5(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t6(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t7(GetBMPPrice, s, T, mu, vol, num, tn++, mats);
	boost::thread t8(GetBMPPrice, s, T, mu, vol, n_samples - num * tn, tn++, mats);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();
	t8.join();

	auto rowIndex = 0;
	for (int i = 0; i < threadCnt; i++)
	{
		auto& m = mats[i];
		prc(rowIndex, 0, size(m.n_rows, m.n_cols)) = m;
		rowIndex += m.n_rows;
	}
	delete[] mats;

	vector<int> t_out;
	auto obd = tsb;
	t_out.push_back(obd);
	while (obd + MONTH_DAYS <= tdays)
	{
		obd += MONTH_DAYS;
		t_out.push_back(obd);
	}
	if (obd < tdays)
		t_out.push_back(tdays);

	vec ret(prc.n_rows, fill::zeros);
	vec knockFlag(prc.n_rows, fill::zeros);
	vector<double> outT;
	for (size_t i = 0; i < prc.n_rows; i++)
	{
		auto flag = false;
		auto p = prc.row(i);
		for (auto d : t_out)
		{
			if (p(d) >= up_out_price)
			{
				auto t = (double)d / YEAR_DAYS;
				auto r = out_return * t * exp(-rf * t);
				ret(i) = r;
				outT.push_back(t);
				knockFlag(i) = 1;
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			auto index = p.index_min();
			//cout << "min prc = " << p(index) << endl;
			if (p(index) <= down_in_price)
			{
				auto last_prc = p(p.n_cols - 1);
				auto r = min(last_prc / s0 - 1, 0.0) * exp(-rf * T);
				ret(i) = r;
				knockFlag(i) = -1;
				flag = true;
			}
		}
		if (!flag)
		{
			auto r = out_return * exp(-rf * T);
			ret(i) = r;
		}
	}

	auto winCnt = 0;
	auto lossCnt = 0;
	for each (auto var in ret)
	{
		if (var > 0)
			winCnt++;
		else if(var < 0)
			lossCnt++;
	}

	auto inCnt = 0;
	auto outCnt = 0;
	for each (auto var in knockFlag)
	{
		if (var == 1)
			outCnt++;
		else if(var == -1)
			inCnt++;
	}
	auto sumT = 0.0;
	for each (auto var in outT)
	{
		sumT += var;
	}
	auto avgOutMonth = 0.0;
	if (outT.size() > 0)
		avgOutMonth = sumT / outT.size() * 12;

	::printf("------Return Stat.------\n");
	::printf("%12s: %7d\n", "MC Samples", n_samples);
	::printf("%12s: %7.2f%%\n", "Mean Return", mean(ret) * 100);
	::printf("%12s: %7.2f%%\n", "Max Return", ret(ret.index_max()) * 100);
	::printf("%12s: %7.2f%%\n", "Min Return", ret(ret.index_min()) * 100);
	::printf("%12s: %7.2f%%\n", "Win Pct", (double)winCnt / n_samples * 100);
	::printf("%12s: %7.2f%%\n", "Loss Pct", (double)lossCnt / n_samples * 100);
	::printf("------In Out Stat.------\n");
	::printf("%12s: %7.2f%%\n", "In Pct", (double)inCnt / n_samples * 100);
	::printf("%12s: %7.2f%%\n", "Out Pct", (double)outCnt / n_samples * 100);
	::printf("%12s: %7.2f%%\n", "None Pct", (double)(n_samples - inCnt - outCnt) / n_samples * 100);
	::printf("%12s: %7.2f (Month)\n", "Mean Out T", avgOutMonth);

	return 0;
}

void func(int x, int y)
{
	cout << x << " " << y << endl;
}

int main(int argc, char** argv)
{
	//rowvec v(3);
	//v(0) = 1;
	//v(1) = 2;
	//v(2) = 3;
	//mat m(4, 3, fill::ones);
	//m = m.each_row() + v;
	//m.print();

	//boost::thread t(func, 5, 6);
	//t.join();

	auto t1 = HighPreciseTickCounter::GetMillSecCounter();

	mc_value(1, 360*3, 360, 0.128751, 0.23, 0.0445, 1.03, 0.75, 0.14, 300000);

	auto t2 = HighPreciseTickCounter::GetMillSecCounter();
	auto cost = HighPreciseTickCounter::GetTimeDiffMillSec(t1, t2);
	::printf("Total Cost:%.6fs\n", cost);

	cout << "finished." << endl;
	cin.get();
	return 0;
}
