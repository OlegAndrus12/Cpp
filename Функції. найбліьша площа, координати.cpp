#include <iostream>
#include<cmath>

using namespace std;
 
double length (double x1, double y1, double x2, double y2);
double S(double a, double b, double c);

int main()
{
	int N = 3;
	double * Ox1 = new double[N];
	double * Oy1 = new double[N];
	double * Ox2 = new double[N];
	double * Oy2 = new double[N];
	double * Ox3 = new double[N];
	double * Oy3 = new double[N];
	cout << "Enter coordinates of the first triangle" << endl;
	for (int i = 0;i < N;++i)
	{
		cin >> Ox1[i];
		cin >> Oy1[i];
	}
	cout << "Enter coordinates of the second triangle"<<endl;
	for (int i = 0;i < N;++i)
	{
		cin >> Ox2[i];
		cin >> Oy2[i];
	}
	cout << "Enter coordinates of the third triangle"<<endl;
	for (int i = 0;i < N;++i)
	{
		cin >> Ox3[i];
		cin >> Oy3[i];
	}
	double a1, b1, c1;
	 a1 = length(Ox1[0], Oy1[0], Ox1[1], Oy1[1]);
	 b1 = length(Ox1[0], Oy1[0], Ox1[2], Oy1[2]);
	c1 = length(Ox1[1], Oy1[1], Ox1[2], Oy1[2]);
	double S1 = S(a1, b1, c1);
	double a2, b2, c2;
	 a2 = length(Ox2[0], Oy2[0], Ox2[1], Oy2[1]);
	 b2 = length(Ox2[0], Oy2[0], Ox2[2], Oy2[2]);
	 c2 = length(Ox2[1], Oy2[1], Ox2[2], Oy2[2]);
	double S2 = S(a2, b2, c2);
	double a3, b3, c3;
	 a3 = length(Ox3[0], Oy3[0], Ox3[1], Oy3[1]);
	 b3 = length(Ox3[0], Oy3[0], Ox3[2], Oy3[2]);
	 c3 = length(Ox3[1], Oy3[1], Ox3[2], Oy3[2]);
	double S3 = S(a3, b3, c3);

	cout << "S1 = " << S1 << endl;
	cout << "S2 = " << S2 << endl;
	cout << "S3 = " << S3 << endl;

	for (int i = 0;i < N;++i)
	{
		if ((S1 > S2) && (S1 > S3))
		{
			cout << "(" << Ox1[i] << "," << Oy1[i] << ")" << endl;
		}
		if ((S2 > S3) && (S2 > S1))
		{
			cout << "(" << Ox2[i] << "," << Oy2[i] << ")" << endl;
		}
		if ((S3 > S2) && (S3 > S1))
		{
			cout << "("<<Ox3[i]<<"," << Oy3[i]<<")" << endl;
		}
	}
	system("pause");
	return 0;
}

double length(double x1, double y1, double x2, double y2)
{
	double result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return result;
}
double S(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	double result = sqrt(p*(p - a)*(p - b)*(p - c));
	return result;
}
