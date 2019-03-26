#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	double **A = new double*[n];
	for (int i = 0;i < n;++i)
	{
		A[i] = new double[n];
	}
	for (int i = 0;i < n;++i)
	{
		for (int j = 0;j < n;++j)
		{
			cin >> A[i][j];
		}
	}
	double q = 0;
	for (int i = 0;i < n;++i)
	{
		q += A[i][0];
	}
	for (int i = 0;i < n;++i)
	{
		double e = 0;
		double b = 0;
		for (int j = 0;j < n;++j)
		{
			e += A[i][j];
			b += A[j][i];
		}
		if (q != e || q != b)
		{
			cout << "Not magic matrix" << endl;
			system("pause");
			return 0;
			system("pause");
		}
	}
	cout << "This is magic matrix" << endl;
	system("pause");
	return 0;

}