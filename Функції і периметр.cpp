#include <iostream>
#include <cmath>

using namespace std;

double length (double x1, double y1, double x2, double y2);

int main()
{
	int N;
	cout << "Enter N" << endl;
	cin >> N;
	double*Ox = new double[N];
	double*Oy = new double[N];
	for (int i = 0;i < N;++i)
	{
		cin >> Ox[i];
		cin >> Oy[i];
	}
	double a, a1, b, b1, y;
	double P = 0;
	int i = 0;
	while (i < N)
	{
		a = Ox[i];
		b = Oy[i];
		i += 1;
		a1 = Ox[i];
		b1 = Oy[i];
		y = length(a,b,a1,b1);
		P += y;
	}
	
	cout << "P = " << P << endl;
	system("pause");
	return 0;
}

double length(double x1, double y1, double x2, double y2)
{
	double result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return result;
}