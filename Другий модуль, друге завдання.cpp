#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	unsigned n;
	cout << "Enter n" << endl;
	cin >> n;
	double *A = new double[n];
	for (int i = 0;i < n;++i)
	{
		cin >> A[i];
	}
	cout << "A = { ";
	for (int i = 0;i < n;++i)
	{
		cout << A[i] << " ";
	}
	cout << " }"<<endl;
	int digit = 0;
	int count = 0;
	double y;
	double y1 = 1;
	double result = 0;
	while (A[count] >= 0)
	{
		y =y1*A[count];
		result +=y ;
		y1 = y;
		++count;
	}

	
	double x;
	double x1 = 1;
	double result2 = 0;
	while (A[digit] != n && digit < n)
	{
		x = x1*A[digit];
		result2 += x;
		x1 = x;
		++digit;
	}
	cout << "Result : " << result << endl;
	cout << "Result : " << result2 << endl;
	system("pause");
	return 0;
}