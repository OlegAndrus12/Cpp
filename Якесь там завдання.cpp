#include<iostream>
#include<cmath>

using namespace std;

class Sq_M
{
private:
	int**A;//створив масив
	int m;//рядки
	int n;//стовпці
public:
	friend ostream & operator<<(ostream & ost, Sq_M&obj)
	{
		for (int i = 0;i < obj.m;++i)
		{
			for (int j = 0;j < obj.n;++j)
			{
				cout << obj.A[i][j] << "    ";
			}
			cout << endl;
		}
	}
	//конструктор за замовчуванням
	Sq_M()
	{
		m = 2;
		n = 2;
		A = new int*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new int[n];
		}
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = 0;
			}
		}

	}
	//конструктор з параметрами
	Sq_M(int m, int n)
	{
		this->m = m;
		this->n = n;
		A = new int*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new int[n];
		}
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = 0;
			}
		}
	}
	//конструктор з параметрами і елементом, що проініціалізує ввесь масив
	Sq_M(int m, int n, int x)
	{
		this->m = m;
		this->n = n;
		A = new int*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new int[n];
		}
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = x;
			}
		}
	}
	//конструктор копіювання
	Sq_M(const Sq_M & obj)
	{
		m = obj.m;
		n = obj.n;
		A = new int*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new int[n];
		}
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = obj.A[i][j];
			}
		}

	}
	//деструктор
	~Sq_M()
	{
		delete[] A;
	}
	//методи
	int maximum()
	{
		int max = A[0][0];
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
		}
		return max;
	}
	int amount()
	{
		int count = 0;
		int certain = 0;
		for (int i = 0;i < m;++i)
		{
				for (int j = 0;j < n;++j)
				{	
					if (A[i][0] == A[i][j])
					{
						++certain;
					}
			}
				if (certain == n)
				{
					++count;
					certain = 0;
				}
				else
				{
					certain = 0;
				}
		}
		return count;
	}
	void output()
	{
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				cout << A[i][j] << "    ";
			}
			cout << endl;
		}
	}
	void input()
	{
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				cin >> A[i][j];
			}
		}
	}
};
void main()
{
	Sq_M B(3, 2);
	Sq_M A(2, 3);
	B.input();
	B.output();
	A.input();
	A.output();
	cout << endl;
	if (A.maximum() > B.maximum())
	{
		cout << "A:" << endl;
		A.output();
		cout << "B:" << endl;
		B.output();
		cout << endl;
		cout<< A.amount();
	}
	else
	{
		cout << "A:" << endl;
		A.output();
		cout << "B:" << endl;
		B.output();
		cout << endl;
		cout << B.amount() << endl;
	}
	system("pause");
}
