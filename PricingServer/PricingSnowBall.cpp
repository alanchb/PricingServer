#include "stdafx.h"
#include "PricingSnowBall.h"
#include "Normal.h"
#include "Quasi.h"
#include <iostream>
#include <cassert>
#include <cmath>
#include <boost\thread.hpp>
//#include <boost\thread\mutex.hpp>

using namespace UtilTool;

//boost::mutex io_mutex;

PricingSnowBall::PricingSnowBall(double s0, int duration, int tsb, double u, double vol, double rf, double out_ratio, double in_ratio, double out_return, int n_samples, double s /*= 0*/, int year_days /*=360*/, bool is_knockin /*=0*/)
{
	m_s0 = s0;
	m_duration = duration;
	m_tsb = tsb;
	m_u = u;
	m_vol = vol;
	m_rf = rf;
	m_out_ratio = out_ratio;
	m_in_ratio = in_ratio;
	m_out_return = out_return;
	m_samples = n_samples; 
	m_s = s;
	m_is_knockin = is_knockin;

	m_year_days = year_days;
	m_month_days = 30;
	if (m_year_days != 360)
	{
		m_year_days = 252;
		m_month_days = 21;
	}
}

PricingSnowBall::~PricingSnowBall()
{

}

void PricingSnowBall::CreateBMPPrice(PricingSnowBall* p, int n_samples, int index, mat* mats, int startIndex /*=-1*/)
{
	PricingSnowBall* ps = static_cast<PricingSnowBall*>(p);
	double T = (double)ps->m_duration / ps->m_year_days;

	auto mu = ps->m_rf - ps->m_u;
	auto S = ps->m_s;
	if (S == 0)
		S = ps->m_s0;

	auto t1 = HighPreciseTickCounter::GetMillSecCounter();

	CONST long long M = n_samples;
	CONST long long N = (long long)(T * ps->m_year_days);

	long long NN = N;
	if (N % 16 != 0)
		NN += 16 - (N % 16);

	auto gap = T / N;
	auto dt0 = gap;
	rowvec dt(NN);
	for (int i = 0; i < NN; i++)
		dt(i) = dt0 + i * gap;

	auto tt1 = HighPreciseTickCounter::GetMillSecCounter();
	mat prc(M, NN + 1, fill::value(S));
	mat rdm(M, NN, fill::zeros);

	if (startIndex >= 0)
		Quasi::GetMatrixCumSumRow3(M, NN, startIndex, rdm);
	else
		Quasi::GetMatrixCumSumRow2(M, NN, rdm);

	//Quasi::GetMatrixCumSumRow(M, NN, rdm);

	//double** mm = new double*[M];
	//for (int i = 0; i < M; i++)
	//{
	//	mm[i] = new double[NN];
	//}
	//Quasi::GetMatrix(M, NN, mm);
	//for (int i = 0; i < M; i++)
	//{
	//	double sum = 0;
	//	for (int j = 0; j < NN; j++)
	//	{
	//		sum += mm[i][j];
	//		rdm(i, j) = sum;
	//	}
	//	delete[] mm[i];
	//}
	//delete[] mm;

	//for (int i = 0; i < M; i++)
	//{
	//	float* x = new float[NN];
	//	normaldistf_boxmuller_avx(x, NN);
	//	float sum = 0;
	//	for (int j = 0; j < NN; j++)
	//	{
	//		//sum += x[j + i * N];
	//		sum += x[j];
	//		rdm(i, j) = sum;
	//	}
	//	delete[] x;
	//}

	auto tt2 = HighPreciseTickCounter::GetMillSecCounter();
	auto cost = HighPreciseTickCounter::GetTimeDiffMillSec(tt1, tt2);
	::printf("%d rdm Cost:%.6fs\n", index, cost);

	auto vol = ps->m_vol;
	auto& W = rdm;
	auto d1 = (mat)(W * sqrt(T / N) * vol);
	auto d2 = (mu - 1 / 2.0 * vol * vol) * dt;
	prc(0, 1, size(M, NN)) = (mat)(S * arma::exp(d1.each_row() + d2));

	//prc(0, 600, size(30, 10)).print();

	mats[index] = prc(0, 0, size(M, N + 1));

	auto tt3 = HighPreciseTickCounter::GetMillSecCounter();
	cost = HighPreciseTickCounter::GetTimeDiffMillSec(tt2, tt3);
	::printf("%d cal Cost:%.6fs\n", index, cost);
}

SnowBallPricingResult PricingSnowBall::MCValue()
{
	double T = (double)m_duration / m_year_days;

	m_threads = 4;
	auto num = (int)(m_samples / m_threads);
	mat prc(m_samples, (uword)m_duration + 1, fill::zeros);

	cout << "num=" << num << endl;
	mat* mats = new mat[m_threads];
	int tn = 0;

	srand((int)time(0));
	auto maxRows = Quasi::MaxRows();
	int startIndex = random(maxRows);
	while (maxRows - startIndex < m_samples)
		startIndex = random(maxRows);

	boost::thread t1(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	boost::thread t2(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	boost::thread t3(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	//boost::thread t4(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	//boost::thread t5(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	//boost::thread t6(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;
	//boost::thread t7(CreateBMPPrice, this, num, tn, mats, startIndex + tn * num); tn++;

	boost::thread t8(CreateBMPPrice, this, m_samples - num * tn, tn, mats, startIndex + tn * num);

	t1.join();
	t2.join();
	t3.join();
	/*t4.join();
	t5.join();
	t6.join();
	t7.join();*/
	t8.join();

	auto rowIndex = 0;
	for (int i = 0; i < m_threads; i++)
	{
		auto& m = mats[i];
		prc(rowIndex, 0, size(m.n_rows, m.n_cols)) = m;
		rowIndex += m.n_rows;
	}
	delete[] mats;

	vector<int> t_out;
	auto obd = m_tsb;
	t_out.push_back(obd);
	while (obd + m_month_days <= m_duration)
	{
		obd += m_month_days;
		t_out.push_back(obd);
	}
	if (obd < m_duration)
		t_out.push_back(m_duration);

	auto up_out_price = m_s0 * m_out_ratio;
	auto down_in_price = m_s0 * m_in_ratio;

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
				auto t = (double)d / m_year_days;
				auto r = m_out_return * t * exp(-m_rf * t);
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
			if (p(index) <= down_in_price || m_is_knockin)	//如果已经敲入，直接进入敲入计算逻辑
			{
				auto last_prc = p(p.n_cols - 1);
				auto r = min(last_prc / m_s0 - 1, 0.0) * exp(-m_rf * T);
				ret(i) = r;
				knockFlag(i) = -1;
				flag = true;
			}
		}
		if (!flag)
		{
			auto r = m_out_return * exp(-m_rf * T);
			ret(i) = r;
		}
	}

	auto winCnt = 0;
	auto lossCnt = 0;
	for (auto var : ret)
	{
		if (var > 0)
			winCnt++;
		else if(var < 0)
			lossCnt++;
	}

	auto inCnt = 0;
	auto outCnt = 0;
	for (auto var : knockFlag)
	{
		if (var == 1)
			outCnt++;
		else if(var == -1)
			inCnt++;
	}
	auto sumT = 0.0;
	for (auto var : outT)
	{
		sumT += var;
	}
	auto avgOutMonth = 0.0;
	if (outT.size() > 0)
		avgOutMonth = sumT / outT.size() * 12;

	::printf("------Return Stat.------\n");
	::printf("%12s: %7d\n", "MC Samples", m_samples);
	::printf("%12s: %7.2f%%\n", "Mean Return", mean(ret) * 100);
	::printf("%12s: %7.2f%%\n", "Max Return", ret(ret.index_max()) * 100);
	::printf("%12s: %7.2f%%\n", "Min Return", ret(ret.index_min()) * 100);
	::printf("%12s: %7.2f%%\n", "Win Pct", (double)winCnt / m_samples * 100);
	::printf("%12s: %7.2f%%\n", "Loss Pct", (double)lossCnt / m_samples * 100);
	::printf("------In Out Stat.------\n");
	::printf("%12s: %7.2f%%\n", "In Pct", (double)inCnt / m_samples * 100);
	::printf("%12s: %7.2f%%\n", "Out Pct", (double)outCnt / m_samples * 100);
	::printf("%12s: %7.2f%%\n", "None Pct", (double)(m_samples - inCnt - outCnt) / m_samples * 100);
	::printf("%12s: %7.2f (Month)\n", "Mean Out T", avgOutMonth);

	return { mean(ret),  ret(ret.index_max()),  ret(ret.index_min()), avgOutMonth };
}
