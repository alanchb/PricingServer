#include "stdafx.h"
#include "PricingBarrier.h"
#include "Normal.h"
#include "Quasi.h"
#include <iostream>
#include <cmath>
#include <boost\thread.hpp>
//#include <boost\thread\mutex.hpp>

using namespace UtilTool;

//boost::mutex io_mutex;



PricingBarrier::PricingBarrier(double s0, int duration, double u, double vol, double rf, double k, double barrier_prc, EnumBarrierType barrier_type, int n_samples, double s /*=0*/, int year_days /*=360*/)
{
	m_s0 = s0;
	m_duration = duration;
	m_u = u;
	m_vol = vol;
	m_rf = rf;
	m_k = k;
	m_barrier = barrier_prc;
	m_barrier_type = barrier_type;
	m_samples = n_samples; 
	m_s = s;

	m_year_days = year_days;
	m_month_days = 30;
	if (m_year_days != 360)
	{
		m_year_days = 252;
		m_month_days = 21;
	}

}

PricingBarrier::~PricingBarrier()
{

}

void PricingBarrier::CreateBMPPrice(PricingBarrier* p, int n_samples, int index, mat* mats)
{
	PricingBarrier* ps = static_cast<PricingBarrier*>(p);
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

	//auto t1 = HighPreciseTickCounter::GetMillSecCounter();
	mat prc(M, NN + 1, fill::value(S));
	mat rdm(M, NN, fill::zeros);
	Quasi::GetMatrixCumSumRow(M, NN, rdm);

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

	//auto tt1 = HighPreciseTickCounter::GetMillSecCounter();

	auto vol = ps->m_vol;
	auto& W = rdm;
	auto d1 = (mat)(W * sqrt(T / N) * vol);
	auto d2 = (mu - 1 / 2.0 * vol * vol) * dt;
	prc(0, 1, size(M, NN)) = (mat)(S * arma::exp(d1.each_row() + d2));

	//prc(0, 600, size(30, 10)).print();

	mats[index] = prc(0, 0, size(M, N + 1));

	auto t2 = HighPreciseTickCounter::GetMillSecCounter();
	auto cost = HighPreciseTickCounter::GetTimeDiffMillSec(t1, t2);
	::printf("%d rdm Cost:%.6fs\n", index, cost);
}

BarrierPricingResult PricingBarrier::MCValue()
{
	double T = (double)m_duration / m_year_days;
	double dt = T / m_duration;
	//if (m_barrier > m_s0)
	//	m_barrier = m_barrier * exp(0.5826 * m_vol * sqrt(dt));
	//else if (m_barrier < m_s0)
	//	m_barrier = m_barrier * exp(-0.5826 * m_vol * sqrt(dt));
	cout << "adjusted barrier:" << m_barrier << endl;

	m_threads = 4;
	auto num = (int)(m_samples / m_threads);
	mat prc(m_samples, m_duration + 1, fill::zeros);

	cout << "num=" << num << endl;
	mat* mats = new mat[m_threads];
	int tn = 0;
	boost::thread t1(CreateBMPPrice, this, num, tn++, mats);
	boost::thread t2(CreateBMPPrice, this, num, tn++, mats);
	boost::thread t3(CreateBMPPrice, this, num, tn++, mats);
	//boost::thread t4(CreateBMPPrice, this, num, tn++, mats);
	//boost::thread t5(CreateBMPPrice, this, num, tn++, mats);
	//boost::thread t6(CreateBMPPrice, this, num, tn++, mats);
	//boost::thread t7(CreateBMPPrice, this, num, tn++, mats);
	boost::thread t8(CreateBMPPrice, this, m_samples - num * tn, tn, mats);

	t1.join();
	t2.join();
	t3.join();
	//t4.join();
	//t5.join();
	//t6.join();
	//t7.join();
	t8.join();

	auto rowIndex = 0;
	for (int i = 0; i < m_threads; i++)
	{
		auto& m = mats[i];
		prc(rowIndex, 0, size(m.n_rows, m.n_cols)) = m;
		rowIndex += m.n_rows;
	}
	delete[] mats;

	vec ret(prc.n_rows, fill::zeros);
	vec knockFlag(prc.n_rows, fill::zeros);
	for (size_t i = 0; i < prc.n_rows; i++)
	{
		auto flag = false;
		auto prices = prc.row(i);
		auto max_price = prices.max();
		auto min_price = prices.min();
		auto last_price = prices(prices.n_cols - 1);
		
		if (max_price > 100000)
			cout << "max_price=" << max_price << " index=" << prices.index_max() << " prc[" << prices.index_max() + 1 <<"]="<< prices(prices.index_max() + 1) << endl;
		switch (m_barrier_type)
		{
		case Proto::DevPricing::CUO:
			if (max_price >= m_barrier)
				ret(i) = 0;
			else
			{
				auto diff = last_price - m_k;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			break;
		case Proto::DevPricing::CUI:
			if (max_price >= m_barrier)
			{
				auto diff = last_price - m_k;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			else
				ret(i) = 0;
			break;
		case Proto::DevPricing::CDO:
			if (min_price <= m_barrier)
				ret(i) = 0; 
			else
			{
				auto diff = last_price - m_k;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			break;
		case Proto::DevPricing::CDI:
			if (min_price <= m_barrier)
			{
				auto diff = last_price - m_k;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			else
				ret(i) = 0;
			break;
		case Proto::DevPricing::PUO:
			if (max_price >= m_barrier)
				ret(i) = 0;
			else
			{
				auto diff = m_k - last_price;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			break;
		case Proto::DevPricing::PUI:
			if (max_price >= m_barrier)
			{
				auto diff = m_k - last_price;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			else
				ret(i) = 0;
			break;
		case Proto::DevPricing::PDO:
			if (min_price <= m_barrier)
				ret(i) = 0;
			else
			{
				auto diff = m_k - last_price;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			break;
		case Proto::DevPricing::PDI:
			if (min_price <= m_barrier)
			{
				auto diff = m_k - last_price;
				ret(i) = (diff > 0 ? diff : 0) * exp(-m_rf * T);
			}
			else
				ret(i) = 0;
			break;
		default:
			break;
		}
	}


	::printf("------Return Stat.------\n");
	::printf("%12s: %7d\n", "MC Samples", m_samples);
	::printf("%12s: %7.2f\n", "Mean Return", mean(ret));
	::printf("%12s: %7.2f\n", "Max Return", ret(ret.index_max()));
	::printf("%12s: %7.2f\n", "Min Return", ret(ret.index_min()));

	return { mean(ret),  ret(ret.index_max()),  ret(ret.index_min()) };
}

