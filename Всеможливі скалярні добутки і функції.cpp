#include <iostream>
#include <cmath>

using namespace std;

void showing(double**C, unsigned m);
void putting(double**C, unsigned m);
void putting_vector(double*X, unsigned k);
void showing_vector(double*X, unsigned k);
void array_to_vector(double **C, double *X, unsigned k, double*V);
double vector_to_vector(double*X, double*Y, unsigned k);

int main()
{
	unsigned k = 3;
	double**A = new double*[k];
	for (int i = 0;i < k;++i)
	{
		A[i] = new double[k];
	}
	double**B = new double*[k];
	for (int i = 0;i < k;++i)
	{
		B[i] = new double[k];
	}
	double**C = new double*[k];
	for (int i = 0;i < k;++i)
	{
		C[i] = new double[k];
	}
	double*A1 = new double[k];
	double*A2 = new double[k];
	double*A3 = new double[k];
	double*A4 = new double[k];

	double *X = new double[k];
	double *Y = new double[k];

	cout << "Enter array A" << endl;
	putting(A, k);
	cout << "Array A" << endl;
	showing(A, k);
	cout << "Enter array B" << endl;
	putting(B, k);
	cout << "Array B" << endl;
	showing(B, k);
	cout << "Enter array C" << endl;
	putting(C, k);
	cout << "Array C" << endl;
	showing(C, k);
	cout << "Enter vector X" << endl;
	putting_vector(X, k);
	cout << "Vector X" << endl;
	showing_vector(X, k);
	cout << "Enter vector Y" << endl;
	putting_vector(Y, k);
	cout << "Vector Y" << endl;
	showing_vector(Y, k);
	cout << endl;
	cout << "Vector Ax"<<endl;
	array_to_vector(A, X, k, A1);
	showing_vector(A1, k);
	cout << endl;
	cout << "Vector By" << endl;
	array_to_vector(B, Y, k, A2);
	showing_vector(A2, k);
	cout << endl;
	cout << "Vector Cx" << endl;
	array_to_vector(C, X, k, A3);
	showing_vector(A3, k);
	cout << endl;
	double result;
	result = vector_to_vector(A1, A2, k) + (vector_to_vector(A3, Y, k) / vector_to_vector(X, A2, k));
	cout << "Result = " << result << endl;
	system("pause");
	return 0;
}

void showing(double**C, unsigned m)
{
	for (int i = 0;i < m;++i)
	{
		for (int j = 0;j < m;++j)
		{
			cout << C[i][j] << "    ";
		}
		cout << endl;
	}

}
void putting(double**C, unsigned m)
{
	for (int i = 0;i < m;++i)
	{
		for (int j = 0;j < m;++j)
		{
			cin >> C[i][j];
		}
	}
}
void putting_vector(double*X, unsigned k)
{
	for (int i = 0;i < k;++i)
	{
		cin >> X[i];
	}
}
void showing_vector(double*X, unsigned k)
{
	for (int i = 0;i < k;++i)
{
	cout << X[i] << "  ";
}
}

void array_to_vector(double **C, double *X, unsigned k, double*V)
{
	for (int i = 0;i < k;++i)
	{
		V[i] = 0;
		for (int j = 0;j < k;++j)
		{
			V[i] += X[i] * C[i][j];
		}
	}
	
}
double vector_to_vector(double*X, double*Y, unsigned k)
{

	double result_of_work = 0;
	for (int i = 0;i < k;++i)
	{
		result_of_work += X[i]*Y[i];
	}
	return result_of_work;
}d

