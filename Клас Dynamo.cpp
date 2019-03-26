#include <iostream>
#include <cmath>

using namespace std;

class Dynamo
{
private:
	double*A;
	int m;
public:
	Dynamo(int m)
	{
		this->m = m;
		A = new double[m];
		for (int i = 0;i < m;++i)
		{
			cin >> A[i];
		}
		cout << endl;
	}
	Dynamo(const Dynamo&obj)
	{
		m = obj.m;
		A = new double[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = obj.A[i];
		}
	}
	

	void output()
	{
		for (int i = 0;i < m;++i)
		{
			cout << A[i] << "  ";
		}
		cout << endl;
	}

	double scalar(Dynamo& B)
	{
		double result = 0;
		if (m != B.m)
		{
			cout << "Error! It`s impossible" << endl;
			return 0;
	 }
		else
		{
			for (int i = 0;i < m;++i)
			{
				result += A[i] * B[i];
			}
		}
		return result;
		
	}
	double & operator[](int i)
	{
		return A[i];
	}
	~Dynamo()
	{
		delete[]A;
	}
};

void main()
{
	Dynamo Array(4);
	Dynamo Bosda(4);
	Array.output();
	Bosda.output();
	cout << Array.scalar(Bosda) << endl;
	system("pause");
}