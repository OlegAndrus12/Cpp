#include<iostream>
#include<cmath>

using namespace std;

double f1(double t)
{
	return pow((1 - (cos(t) / 4)), 0.25);
}
double f2(double t)
{
	return pow((1 + (atan(t) / 2)), 0.2);
}
float f3(float t)
{
	double a = 1 / (3 + t*t);
	double u = 1. / 9.;
	return pow(a,u);
}

int main()
{
	double x;
	cin >> x;
	double result = f1(x)+(f2(x)*f3(x));
	cout << result;
	system("pause");
	return 0;
}
