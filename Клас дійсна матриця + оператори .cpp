#include<iostream>
#include<cmath>

using namespace std;

class DMatrix
{
private:
	double**A;
	int m;
	int n;
public:
	//������� �����������
	DMatrix()
	{
		m = 2;
		n = 2;
		A = new double*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new double[n];
		}
	}
	//����������� � �����������
	DMatrix(int m, int n)
	{
		this->m = m;
		this->n = n;
		A = new double*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new double[n];
		}
	}
	//����������� � �����������, �� �������� ����� ���������
	DMatrix(int m, int n, double x)
	{
		this->m = m;
		this->n = n;
		A = new double*[m];
		for (int i = 0;i < m;++i)
		{
			A[i] = new double[n];
		}
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = x;
			}
		}
	}
	//����������� ���������
	DMatrix(const DMatrix& obj)
	{
		m = obj.m;
		n = obj.n;
		A = new double*[m];
		for(int i = 0;i < m;++i)
		{
			A[i] = new double[n];
		}

		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = obj.A[i][j];
			}
		}
	}
	//����������
	~DMatrix()
	{
		for (int i = 0;i < m;++i)
		{
			delete[]A[i];
		}
	}
	//������
	double minimum()
	{
		double min,result;
		int row, column;
		min = A[0][0];
		row = column = 0;
		result = 0;
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
					row = i;
					column = j;
				}
			}
		}
		
			for (int j = 0;j < n;++j)
			{
				result += A[row][j];
			}
		
		return result;
	}
	//	�������� ������
	friend ostream & operator<< (ostream & ost, DMatrix& obj)
	{
		for (int i = 0;i < obj.m;++i)
		{
			for (int j = 0;j < obj.n;++j)
			{
				ost << obj.A[i][j] << "    ";
			}
			ost << endl;
		}
		return ost;
	}
	// �������� �����
	friend istream & operator>> (istream & ist, DMatrix& obj)
	{
		for(int i =0;i<obj.m;++i)
		{
			for (int j = 0;j < obj.n;++j)
			{
				ist >> obj.A[i][j];
			}
		}
		return ist;
	}
	// �������� ���������
	DMatrix & operator= (const DMatrix & obj)
	{
		if (this != &obj)
		{
			for (int i = 0;i < m;++i)
			{
				delete[]A[i];
			}
			m = obj.m;
			n = obj.n;
			A = new double*[m];
			for (int i = 0;i < m;++i)
			{
				A[i] = new double[n];
			}
			for (int i = 0;i < m;++i)
			{
				for (int j = 0;j < n;++j)
				{
					A[i][j] = obj.A[i][j];
				}
			}
		}
		return *this;
	}
    //�������� ���������
	DMatrix operator+ (const DMatrix & obj)
	{
		if ((m == obj.m) && (n == obj.n))
		{
			DMatrix result = *this;
			for (int i = 0;i < m;++i)
			{
				for (int j = 0;j < n;++j)
				{
					result.A[i][j] +=obj.A[i][j];
				}
			}
			return result;
		}
		return *this;
	}
	DMatrix operator+=(const DMatrix & obj)
	{
		if ((m == obj.m) && (n == obj.n))
		{
			DMatrix result(*this);
			for (int i = 0;i < m;++i)
			{
				for (int j = 0;j < n;++j)
				{
					result.A[i][j] += obj.A[i][j];
				}
			}
			return result;
		}
		return *this;
	}
	DMatrix& operator++()
	{
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j]=A[i][j]+1;
			}
		}
		return *this;
	}
	DMatrix operator++(int)
	{
		DMatrix result(*this);
		for (int i = 0;i > m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j]=A[i][j]+1;
			}
		}
		return result;
	}
	DMatrix & operator+()
	{
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j]=A[i][j]*1;
			}
		}
		return *this;
	}
	//�������� ��������
	DMatrix operator- (const DMatrix & obj)
	{
		if ((m == obj.m) && (n == obj.n))
		{
			DMatrix result(*this);
			for (int i = 0;i < m;++i)
			{
				for (int j = 0;j < n;++j)
				{
					result.A[i][j] -= obj.A[i][j];
				}
			}
			return result;
		}
		return *this;
	}
	DMatrix operator-=(const DMatrix & obj)
	{
		if ((m == obj.m) && (n == obj.n))
		{
			DMatrix result(*this);
			for (int i = 0;i < m;++i)
			{
				for (int j = 0;j < n;++j)
				{
					result.A[i][j] -= obj.A[i][j];
				 }
			}
			return result;
		}
		return*this;
	}
	DMatrix & operator--()
	{
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = A[i][j] - 1;
			}
		}
		return *this;
	}
	DMatrix operator--(int)
	{
		DMatrix result(*this);
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				A[i][j] = A[i][j] - 1;
			}
		}
		return result;
	}
	DMatrix operator-()
	{
		DMatrix result(*this);
		for (int i = 0;i < m;++i)
		{
			for (int j = 0;j < n;++j)
			{
				result.A[i][j]=result.A[i][j]*(-1);
			}
		}
		return result;
	}
	//�������� ������������
	double * operator[](int i)
	{
		return A[i];
	}
	double const * operator[](int i)const
	{
		return A[i];
	}
	//����� ��������� 
	bool operator> (const DMatrix & obj)const
	{
				return (A[m][n] > A[obj.m][obj.n]);
	}
	bool operator>= (const DMatrix &obj)const
	{
		return(A[m][n] > A[obj.m][obj.n]);
	}
	bool operator<(const DMatrix &obj)const
	{
		return(A[m][n] < A[obj.m][obj.n]);
	}
	bool operator<=(const DMatrix& obj)const
	{
		return(A[m][n] <= A[obj.m][obj.n]);
	}
	bool operator==(const DMatrix &obj)const
	{
		return (A[m][n] == A[obj.m][obj.n]);
	}
	bool operator!=(const DMatrix& obj)const
	{
		return(A[m][n] != A[obj.m][obj.n]);
	}
};
void main()
{
	DMatrix a(3, 3);
	DMatrix b(4,3);
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	cout << (a.minimum()+b.minimum())<<endl;
	system("pause");
}