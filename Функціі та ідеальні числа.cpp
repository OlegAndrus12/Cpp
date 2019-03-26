#include<iostream>
#include<cmath>

using namespace std;
int number(int x);

int main()
{
	int digits;
	cout << "Enter digits" << endl;
	cin >> digits;
	int sum = number(digits);
	if (sum == digits)
	{
		cout << digits << " is the perfect digit" << endl;
	}
	else
	{
		cout << digits << " is not the perfect digit" << endl;
	}
	int N;
	cout << "Amount of digit" << endl;
	cin >> N;
	int * A = new int[N];
	for (int i = 0;i < N;++i)
	{
		cin >> A[i];
	}
	for (int i = 0;i < N;++i)
	{

		int sum = number(A[i]);
		if (A[i] == sum)
		{
			cout << A[i] << " is the perfect digst" << endl;
		}
		else
		{
			cout << A[i] << " is not the perfect digit" << endl;
		}
	}
	system("pause");
	return 0;
}

int number (int x)
{

	int sum = 0;
	for (int i = 1; i < x;++i)
	{
		if (x % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}