#pragma once
#include <armadillo>
#include <vector>

using namespace std;
using namespace arma;

//#define YEAR_DAYS 360
//#define MONTH_DAYS 30

struct SnowBallPricingResult
{
	double Value;
	double ValueMax;
	double ValueMin;
	double AvgKnockOutMonth;
};

class PricingSnowBall
{
public:
	PricingSnowBall(double s0, int duration, int tsb, double u, double vol, double rf, double out_ratio, double in_ratio, double out_return, int n_samples, double s = 0, int year_days = 360, bool is_knockin = 0);
	~PricingSnowBall();

	SnowBallPricingResult MCValue();
private:
	static void CreateBMPPrice(PricingSnowBall* p, int n_samples,int index, mat* mats, int startIndex = -1);

private:
	double m_s0;
	int m_duration;
	int m_tsb;
	double m_u; 
	double m_vol;
	double m_rf;
	double m_out_ratio;
	double m_in_ratio;
	double m_out_return;
	int m_samples;
	double m_s;
	bool m_is_knockin;

	int m_threads;
	mat* m_mats;

	int m_year_days;
	int m_month_days;
};

