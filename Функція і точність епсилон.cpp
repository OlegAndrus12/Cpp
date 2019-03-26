#include<iostream>
#include<cmath>
using namespace std;

double expression(double x, double eps);

int main()
{
	double y;
	double eps;
	double x;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter eps" << endl;
	cin >> eps;
	y = expression(x, eps);
	cout << "y = " << y << endl;
	system("pause");
	return 0;

}

double expression(double x, double eps)
{
	double sum = 0;
	double y = x;
	double fac = 1;
	double fac2;

	while (y < eps)
	{

		int k = 0;
		fac2 = k;
		fac *= fac2;
		sum += y;
		y *= ((-pow(x, 2))*(2 * k + 1)) / ((2 * k + 3)*(k + 1));
		++k;

	}

	return sum;
}


