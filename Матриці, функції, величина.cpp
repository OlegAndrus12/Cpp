#include<iostream>
#include <cmath>

using namespace std;

double mecra(double**Array, int rows, int columns)
{
	double max;
	double sum_max = 0;
	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
	{
			max = Array[i][j];
			if (Array[i][j] > max && j < columns)
			{
				max = Array[rows][columns];
			}

		}
		sum_max += max;

	}
	return sum_max;
}
void puttingA(int rows, int columns, double**C)
{
	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
		{
			cout << "A[" << i << "] [" << j << "] : " << endl;
			cin >> C[i][j];
		}
	}
}
void puttingB(int rows, int columns, double**C)
{
	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
		{
			cout << "B[" << i << "] [" << j << "] : " << endl;
			cin >> C[i][j];
		}
	}
}
void puttingC(int rows, int columns, double**C)
{
	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
		{
			cout << "C[" << i << "] [" << j << "] : " << endl;
			cin >> C[i][j];
		}
	}

}
int main()
{
	int rows = 2;
	int columns = 3;
	double**A = new double*[rows];
	for (int i = 0;i < rows;++i)
	{
		A[i] = new double[columns];
	}
	double**B = new double*[rows];
	for (int i = 0;i < rows;++i)
	{
		B[i] = new double[columns];
	}
	double**C = new double*[rows];
	for (int i = 0;i < rows;++i)
	{
		C[i] = new double[columns];
	}
	double**X = new double*[rows];
	for (int i = 0;i < rows;++i)
	{
		X[i] = new double[columns];
	}
	puttingA(rows, columns, A);
	cout << endl;
	puttingB(rows, columns, B);
	cout << endl;
	puttingC(rows, columns, C);
	cout << endl;
	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
		{
			X[i][j] = A[i][j] + B[i][j] + C[i][j];
		}
	}
	double result;
	result = (mecra(A, rows, columns) + mecra(B, rows, columns) + mecra(C, rows, columns));
	double result1;
	result1= mecra(X, rows, columns);
	cout << "Result = " << result << endl;
	cout << "Result1 = " << result << endl;
	system("pause");
	return 0;
}