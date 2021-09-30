#pragma once

#include <armadillo>
#include <boost/shared_array.hpp>

#define MAX_MAT_ROW 1500000 
#define MAX_MAT_COL 1080 

#define  MAX_RAND 82934829
//#define random(x) int((double)rand()/RAND_MAX * MAX_RAND)%(x) // 注：RAND_MAX值为32767
#define random(x) (rand() * (rand()%100))%(x)	//rand()最大值为32767， 这么调整后最大值为 32767 * 99

using namespace boost;
using namespace arma;

class Quasi
{
public:
	static void Init();
	static void GetMatrix(int n_paths, int n_cols, double** outMat);
	static void GetMatrixCumSumRow(int n_paths, int n_cols, mat& outMat);
	static void GetMatrixCumSumRow2(int n_paths, int n_cols, mat& outMat);
	static void GetMatrixCumSumRow3(int n_paths, int n_cols, int startIndex, mat& outMat);

	static int MaxRows();
	static int MaxCols();

private: 
	//static double m_mat[MAX_MAT_ROW][MAX_MAT_COL];
	static shared_array<shared_array<float>> m_mat;
	static int m_maxRows;
	static int m_maxCols;
};

