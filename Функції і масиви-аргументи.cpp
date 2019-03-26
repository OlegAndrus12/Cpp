#include<iostream>
#include<cmath>

using namespace std;

int maximum(int*C, unsigned k);
int minimum(int*A, unsigned digit);
void puttingA(int*C, unsigned number);
void puttingB(int*C, unsigned number);
void puttingC(int*C, unsigned number);
int main()
{
	unsigned k = 3;
	unsigned m, n;
	cout << "Enter size [m] of array B" << endl;
	cin >> m;
	cout << "Enter size [n] of array A" << endl;
	cin >> n;
	int*A = new int[n];
	int*B = new int[m];
	int*C = new int[k];
	puttingA(A, n);
	cout << endl;
	puttingB(B, m);
	cout << endl;
	puttingC(C, k);
	cout << endl;
	int l;
	if (abs(minimum(A, n)) > 10)
	{
		l = minimum(B, m) + minimum(C, k);
	}
	else
	{
		l = 1+pow(maximum(C, k), 2);
	}
	cout << "l = " << l << endl;
	system("pause");
	return 0;
}
int maximum(int*C, unsigned k)
{
	int max_element;
	for (int i = 0;i < k;++i)
	{
		max_element = C[0];
		if (C[i] > max_element)
		{
			max_element = C[i];
		}
	}
	return max_element;
}
int minimum(int*A, unsigned digit)
{
	int min_element;
	for (int i = 0;i < digit;++i)
	{
		min_element = A[0];
		if (A[i] < min_element)
		{
			min_element = A[i];
		}
	}
	return min_element;
}
void puttingA(int*C, unsigned number)
{
	for (int i = 0;i < number;++i)
	{
		cout << "A [" << i << "] : " << endl;
		cin >> C[i];
	}
}
void puttingB(int*C, unsigned number)
{
	for (int i = 0;i < number;++i)
	{
		cout << "B [" << i << "] : " << endl;
		cin >> C[i];
	}
}
void puttingC(int*C, unsigned number)
{
	for (int i = 0;i < number;++i)
	{
		cout << "C [" << i << "] : " << endl;
		cin >> C[i];
	}
}