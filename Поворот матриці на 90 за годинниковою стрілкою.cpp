#include<iostream>
#include <cmath>

using namespace std;
int main()
{
	int N;
	cout << "Enter N" << endl;
	cin >> N;
	N *= 2;
	double** A = new double *[N];

	for (int i = 0;i < N;++i)
	{
		A[i] = new double[N];
	}

	double **B = new double*[N];

	for (int i = 0;i < N;++i)
	{
		B[i] = new double[N];
	}


	for (int i = 0;i < N;++i)
	{
		for (int j = 0;j < N;++j)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0;i < N;++i)
	{
		for (int j = 0;j < N;++j)
		{
			cout << A[i][j] << "    ";
		}
		cout << endl;
	}
	for (int i = 0;i < N;++i)
	{
		for (int j = 0;j < N;++j)
		{
			B[j][N - i - 1] = A[i][j];
		}
	}

	cout << endl;
	for (int i = 0;i < N;++i)
	{
		for (int j = 0;j < N;++j)
		{
			cout << B[i][j] << "    ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}