#pragma once
#include <armadillo>
#include <vector>

#include "../ProtoBufferFile/cpp/ProtoDevPricing.pb.h"

using namespace std;
using namespace arma;
using namespace Proto::DevPricing;

//#define YEAR_DAYS 360
//#define MONTH_DAYS 30

struct BarrierPricingResult
{
	double Value;
	double ValueMax;
	double ValueMin;
};

class PricingBarrier
{
public:
	PricingBarrier(double s0, int duration, double u, double vol, double rf, double k, double barrier, EnumBarrierType barrier_type, int n_samples, double s = 0, int year_days = 360);
	~PricingBarrier();

	BarrierPricingResult MCValue();
private:
	static void CreateBMPPrice(PricingBarrier* p, int n_samples,int index, mat* mats);

private:
	double m_s0;
	int m_duration;
	int m_tsb;
	double m_u; 
	double m_vol;
	double m_rf;
	double m_k;
	double m_barrier;
	EnumBarrierType m_barrier_type;
	int m_samples;
	double m_s;

	int m_threads;
	mat* m_mats;

	int m_year_days;
	int m_month_days;
};

