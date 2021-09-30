#include "stdafx.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <boost/filesystem.hpp>
#include "Quasi.h"
#include "ProtoBufferHelper.h"
#include "../ProtoBufferFile/cpp/ProtoData.pb.h"


//double Quasi::m_mat[MAX_MAT_ROW][MAX_MAT_COL];
shared_array<shared_array<float>> Quasi::m_mat;
int Quasi::m_maxRows = MAX_MAT_ROW;
int Quasi::m_maxCols = MAX_MAT_COL;

using namespace UtilTool;
using namespace Proto::Data;

void Quasi::Init()
{
	m_mat.reset(new shared_array<float>[MAX_MAT_ROW]);
	for (int i = 0; i < MAX_MAT_ROW; i++)
	{
		m_mat[i].reset(new float[MAX_MAT_COL]);
	}

	cout << "reading quasi file" << endl;
	DataMatrix mat;
	m_maxRows = 0;
	for (int i = 1; i <= 8; i++)
	{
		char fn[64];
		//sprintf(fn, "Z:\\winshare\\quasi\\quasi%d.pb", i);
		sprintf(fn, "./quasi%d.pb", i);
		if (!filesystem::exists(fn))
			continue;
		ProtoBufferHelper::ParseFromFile(&mat, fn);

		cout << "quasi rows=" << mat.matrix_size() << endl;
		//m_maxRows += mat.matrix_size();
		for (int i = 0; i < min(mat.matrix_size(), MAX_MAT_ROW); i++)
		{
			auto row = mat.matrix(i);
			if (i == 0)
			{
				cout << "quasi cols=" << row.rows_size() << endl;
				m_maxCols = max(m_maxCols, row.rows_size());
			}
			bool isSuccess = true;
			for (int j = 0; j < min(row.rows_size(), MAX_MAT_COL); j++)
			{
				if (row.rows(j) > 100) //有inf的情况
				{
					isSuccess = false;
					printf("%s row=%d col=%d value=%f\n", fn, i, j, row.rows(j));
					break;
				}
				m_mat[m_maxRows][j] = row.rows(j);
			}

			if (isSuccess)
			{
				m_maxRows++;
			}
		}
	}
	cout << "Total Rows:" << m_maxRows << endl;
}

void Quasi::GetMatrix(int n_paths, int n_cols, double** outMat)
{
	set<int> setIndex;
	srand((int)time(0));
	n_paths = min(n_paths, m_maxRows);
	n_cols = min(n_cols, m_maxCols);
	for (int i = 0; i < n_paths; i++)
	{
		int row = random(m_maxRows);
		while (setIndex.find(row) != setIndex.end())
			row = random(m_maxRows);
		setIndex.insert(row);
		for (int j = 0; j < n_cols; j++)
		{
			outMat[i][j] = m_mat[row][j];
		}
	}
}

void Quasi::GetMatrixCumSumRow(int n_paths, int n_cols, mat& outMat)
{
	set<int> setIndex;
	srand((int)time(0));
	n_paths = min(n_paths, m_maxRows);
	n_cols = min(n_cols, m_maxCols);
	for (int i = 0; i < n_paths; i++)
	{
		float sum = 0;
		int row = random(m_maxRows);
		while (setIndex.find(row) != setIndex.end())
			row = random(m_maxRows); 
		setIndex.insert(row);
		for (int j = 0; j < n_cols; j++)
		{
			sum += m_mat[row][j];
			outMat(i, j) = sum;
		}
	}
}

void Quasi::GetMatrixCumSumRow2(int n_paths, int n_cols, mat& outMat)
{
	n_paths = min(n_paths, m_maxRows);
	n_cols = min(n_cols, m_maxCols);

	srand((int)time(0));
	uword startIndex = random(m_maxRows);
	while (m_maxRows - startIndex < n_paths)
		startIndex = random(m_maxRows);

	for (uword i = startIndex; i < startIndex + n_paths; i++)
	{
		float sum = 0;
		for (uword j = 0; j < n_cols; j++)
		{
			sum += m_mat[i][j];
			outMat(i - (uword)startIndex, j) = sum;
		}
	}
}

void Quasi::GetMatrixCumSumRow3(int n_paths, int n_cols, int startIndex, mat& outMat)
{
	n_paths = min(n_paths, m_maxRows);
	n_cols = min(n_cols, m_maxCols);

	for (uword i = startIndex; i < (uword)startIndex + n_paths; i++)
	{
		float sum = 0;
		for (uword j = 0; j < n_cols; j++)
		{
			sum += m_mat[i][j];
			outMat(i - (uword)startIndex, j) = sum;
		}
	}
}

int Quasi::MaxRows()
{
	return m_maxRows;
}

int Quasi::MaxCols()
{
	return m_maxCols;
}
