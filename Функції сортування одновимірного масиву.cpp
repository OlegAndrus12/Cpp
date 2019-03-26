#include<iostream>
#include<cmath>

using namespace std;

void sort_choice_max(double*C, unsigned k);
void sort_choice_min(double*C, unsigned k);
void sort_buble_max(double*C, unsigned k);
void sort_buble_min(double*C, unsigned k);
void ToSee(double*C, unsigned k);

int main()
{
	unsigned k;
	cout << "Enter k" << endl;
	cin >> k;
	double*A = new double[k];
	for (int i = 0;i < k;++i)
	{
		cin >> A[i];
	}
	cout << "Your array" << endl;
	for (int i = 0;i < k;++i)
	{
		cout << A[i] << "  ";
	}

	cout << endl;
	cout << "Sorted frow max to min array by buble" << endl;
	sort_buble_min(A, k);
	ToSee(A, k);
	cout << endl;
	cout << "Sorted frow min to max array by buble" << endl;
	sort_buble_max(A, k);
	ToSee(A, k);
	cout << endl;
	cout << "Sorted frow max to min array by choicing" << endl;
	sort_choice_min(A, k);
	ToSee(A, k);
	cout << endl;
	cout << "Sorted frow min to max array by choicing" << endl;
	sort_buble_max(A, k);
	ToSee(A, k);
	cout << endl;

	system("pause");
	return 0;
}
void sort_choice_max(double*C, unsigned k)
{
	for (int i = 0; i < k; i++)
	{
		
		for (int j = i + 1;j < k; j++)
		{
			if (C[i] >C[j])
			{
				swap(C[i], C[j]);
			}
		}
	}
	
}
void sort_choice_min(double*C, unsigned k)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = i + 1;j < k; j++)
		{
			if (C[i] < C[j])
			{
				swap(C[i], C[j]);
			}
		}
	}
}
void sort_buble_max(double*C, unsigned k)
{
	int count=0;
	for (int i = 0;i < k - 1;++i)
	{
		for (int j = 0; j < k - i - 1;++j)	
			if (C[j] > C[j + 1])
			{
				swap(C[j], C[j + 1]);
				++count;
			}
	}
}
void sort_buble_min(double*C, unsigned k)
{
	int count=0;
	for (int i = 0;i < k - 1;++i)
	{
		for (int j = 0; j < k - i - 1;++j)
			if (C[j] < C[j + 1])
			{
				swap(C[j], C[j + 1]);
				++count;
			}
	}
}
void ToSee(double*C, unsigned k)
{
	for (int i = 0;i < k;++i)
	{
		cout << C[i] << "  ";
	}
}
