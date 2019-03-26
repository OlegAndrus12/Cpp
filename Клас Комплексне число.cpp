#include <iostream>
#include <cmath>

using namespace std;

class C
{
private:
	double a;
	double b;
public:
	friend istream & operator>> (istream & ist, C & obj)
	{
		ist >> obj.a >> obj.b;
		return ist;
	}
	friend ostream& operator<< (ostream & ost, C & obj)
	{
		if (obj.b < 0)
		{
			ost << obj.a << "-" << -obj.b << "i" << endl;
		}
		if (obj.b > 0)
		{
			ost << obj.a << "+" << obj.b << "i" << endl;
		}
		if (obj.b == 0)
		{
			ost << obj.a << "+" << obj.b << "i" << endl;
		}
		return ost;
	}
	C(double a = 1.0, double b = 2.0)
	{
		this->a = a;
		this->b = b;
	}
	C(const C & obj)
	{
		a = obj.a;
		b = obj.b;
	}
	void input()
	{
		cin >> a >> b;
	}
	void output()
	{
		if (b < 0)
		{
			cout << a << "-" << -b << "i" << endl;
		}
		if (b > 0)
		{
			cout << a << "+" << b << "i" << endl;
		}
		if (b == 0)
		{
			cout << a << "+" << b << "i" << endl;
		}
	}

	C operator+ (const C & obj)const
	{
		C result;
		result.a = a + obj.a;
		result.b = b + obj.b;
		return result;
	}
	C operator- (const C & obj)const
	{
		C result;
		result.a = a - obj.a;
		result.b = b - obj.b;
		return result;
	}
	C operator* (const C& obj)const
	{
		C result;
		result.a = ((a*obj.a) - (b*obj.b));
		result.b = ((a*obj.b) - (b*obj.a));
		return result;
	}
	C operator/ (const C & obj)const
	{
		C result;
		result.a = ((a*obj.a) + (b*obj.b)) / ((obj.a*obj.a) + (obj.b*obj.b));
		result.b = ((b*obj.a) - (a*obj.b)) / ((obj.a*obj.a) + (obj.b*obj.b));
		return result;
	}
	bool operator== (const C & obj)const
	{
		return ((a == obj.a) && (b == obj.b));
	}
	bool operator!= (const C & obj)const
	{
		return ((a != obj.a) || (b != obj.b));
	}
	C& operator= (const C & obj)
	{
		if (this != &obj)
		{
			a = obj.a;
			b = obj.b;
		}
		return*this;
	}
	~C()
	{

	}
};

void main()
{
	C a;
	C a1;
	cin >> a>>a1;
	cout << a+a1;
	system("pause");
}