#include<iostream>
#include<cmath>

using namespace std;

class Q
{
private:
	unsigned m;
	int n;
public:
	//������������ �����������
	Q(unsigned m = 0, int n = 1)
	{
		this->m = m;
		this->n = n;
	}
	//����������� ���������
	Q(const Q & obj)
	{
		m = obj.m;
		n = obj.n;
	}
	//����� �����
	void input()
	{
		cin >> m;
		cin >> n;
	}
	//����� ������
	void output()
	{
		cout << m << "/" << n << endl;
	}
	//����� ���������
	Q sum(Q & t2)
	{
		Q result;
		result.m = (m*t2.n) + (t2.m*n);
		result.n= n*t2.n;
		return result;
	}
	//����� �������
	Q dob(const Q& t2)
	{
		Q result;
		result.m = m*t2.m;
		result.n = n*t2.n;
		return result;
	}
	//�������������� ���������
	//�������������� ������� ���������
	 bool operator> (const Q & obj1)const
	{
		 return ((m * obj1.n) > (obj1.m * n));
	}
	 bool operator< (const Q & obj1)const
	 {
		 return((m * obj1.n) < (obj1.m * n));
	 }
	 bool operator<= (const Q & obj1)const
	 {
		 return ((m * obj1.n) <= (obj1.n * m));
	 }
	 bool operator>= (const Q & obj1)const
	 {
		 return ((m * obj1.n) >= (obj1.m * n));
	 }
	 bool operator== (const Q & obj1)const
	 {
		 return ((m == obj1.m) && (n == obj1.n));
	 }
	 bool operator!= (const Q & obj1)const
	 {
		 return ((m != obj1.m) && (n != obj1.n));
	 }
	 //�������������� ������������ ���������
	 //�������� ���������
	 Q operator+ (const Q & t1)const
	 {
		 Q result;
		 result.m = ((m * t1.n) + (t1.m * n));
		 result.n = n * t1.n;
		 return result;
	  }
	 Q operator- (const Q & t1)const
	 {
		 Q result;
		 result.m = ((m * t1.n) - (t1.m * n));
		 result.n = n * t1.n;
		 return result;
	 }
	 Q operator* (const Q & t1)const
	 {
		 Q result;
		 result.m = m*t1.m;
		 result.n = n * t1.n;
		 return result;
	 }
	 Q operator/ (const Q & t1)const
	 {
		 Q result;
		 result.m = m*t1.n;
		 result.n = n * t1.m;
		 return result;
	 }
	 void operator+= (const Q & t1)
	 {
		 m = ((m*t1.n) + (t1.m*n));
		 n = n*t1.n;
	 }
	 void operator-= (const Q & t1)
	 {
		 m = ((m*t1.n) - (t1.m*n));
		 n = n*t1.n;
	 }
	 //�������� �����
	 friend istream & operator>> (istream & ist, Q & obj)
	 {
		 ist >> obj.m >> obj.n;
		 return ist;
	 }
	 //�������� ������
	 friend ostream & operator<< (ostream & ost, Q & obj)
	 {
		 ost << obj.m << "/" << obj.n << endl;
		 return ost;
	 }
};

void main()
{
	Q array[5];
	for (int i = 0;i < 5;++i)
	{
		cin >> array[i];
	}
	for (int j = 0;j < 5;++j)
	{
		cout << array[j] << "  ";
	}
	//���������� �� ���������� ������� ���������
	for (int i = 0;i < 5;++i)
	{
		for (int j = 0;j < 5 - i - 1;++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
	for (int j = 0;j < 5;++j)
	{
		cout << array[j] << "  ";
	}
	system("pause");
}