#include<iostream>
#include <cmath>

using namespace std;

void scalar(double c, double**A, unsigned k);
double plus_element(double**A, unsigned k);
void entering(double**A, unsigned k);
void showing(double**C, unsigned k);
int main()
{
	unsigned k;
	cout << "Enter k" << endl;
	cin >> k;
	double **A = new double*[k];
	double **B = new double*[k];
	double **C = new double*[k];
	for (int i = 0;i < k;++i)
	{
		A[i] = new double[k];
		B[i] = new double[k];
		C[i] = new double[k];
	}
	entering(A, k);
	cout << endl;
	entering(B, k);
	cout << endl;
	entering(C, k);
	cout << endl;
	cout << "A : " << endl;
	showing(A, k);
	cout << endl;
	cout << "B : " << endl;
	showing(B, k);
	cout << endl;
	cout << "C : " << endl;
	showing(C, k);
	cout << endl;
	if ((plus_element(A, k) > plus_element(B, k)) && plus_element(A, k) > plus_element(C, k))
	{
		scalar(10, A, k);
		cout << "A : " << endl;
		showing(A, k);
	}
	else if ((plus_element(B, k) > plus_element(A, k)) && plus_element(B, k) > plus_element(C, k))
	{
		scalar(10, B, k);
		cout << "B : " << endl;
		showing(B, k);
	}
	else
	{
		cout << "C : " << endl;
		scalar(10, C, k);
		showing(C, k);
	}

	system("pause");
	return 0;
}



void scalar(double c, double**A, unsigned k)
{
	for (int i = 0;i < k;++i)
	{
		for (int j = 0;j < k;++j)
		{
			A[i][j] *= c;
		}
	}
}
double plus_element(double**A, unsigned k)
{
	double sum = 0;
	for (int i = 0;i < k;++i)
	{
		for (int j = 0;j < k;++j)
		{
			if (A[i][j] > 0)
			{
				sum += A[i][j];
			}
		}
	}
	return sum;
}
void entering(double**A, unsigned k)
{
	for (int i = 0;i < k;++i)
	{
		for (int j = 0;j < k; ++j)
		{
			cin >> A[i][j];
		}
	}
}
void showing(double**C, unsigned k)
{
	for (int i = 0;i < k;++i)
	{
		for (int j = 0; j < k;++j)
		{
			cout << C[i][j] << "    ";
		}
		cout << endl;
	}
}

