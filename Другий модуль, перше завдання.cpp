#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double x;
	cout << "Enter n >=2" << endl;
	cin >> n;
	cout << "Enter x" << endl;
	cin >> x;
	double y = sin(x);
	double result = 0;
	for (int i = 0;i < n;++i)
	{
		result += y;
		y = sin(y);
	}
	cout << "Result : " << result << endl;
	system("pause");
	return 0;

}