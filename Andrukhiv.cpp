#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	const int N = 5;
	const int _22 = 22;
	const int _21 = 21;
	const int _4 = 4;
	const int _1 = 1;

	double a[N];
	double c;
	double d;
	double results[N];
	double temp;

	cout << "Enter five elements of array "<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << "a[" << i << "] = " ;
		cin >> a[i];
	}

	cout << "Enter c : ";
	cin >> c;
	cout << "Enter d : ";
	cin >> d;

	_asm
	{
		xor esi, esi
		mov ecx, N
start :
		fld c
		fimul _22
		fsub d
		fld a[esi * 8]
		fimul _21
		fsqrt
		fstp temp
		fadd temp

		fld a[esi * 8]
		fidiv _4
		fisub _1
		fdiv
		fstp res[esi * 8]
		inc esi
		loop start
	}

	cout << endl;
	cout << "Results assembler code: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Y[" << i << "] = " << res[i] << endl;
	}
	cout <<  endl;
	cout << "Results C++ code " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Y[" << i << "] = " << (22 * c - d + sqrt(21 * a[i])) / (a[i] / 4 - 1) << endl;
	}
	system("pause");
	return 0;
}