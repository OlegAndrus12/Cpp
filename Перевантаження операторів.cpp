#include<iostream>
#include<cmath>

using namespace std;

class Point
{
protected:
	int x;
	int y;
public:
	Point() : x(0), y(0)
	{
		//cout << "x = " << x << " y = " << y <<endl;
	}
	Point(int xx, int yy, int zz = 0) :x(xx), y(yy)
	{
		//cout << "x = " << x << " y = " << y <<endl;
	}
	Point(const Point&p): x(p.x), y(p.y)
	{
	}


	Point & operator= (const Point& p) 
	{
		if (&p != this)
		{
			x = p.x;
			y = p.y;
		}
		return *this;
	}


	Point operator+(const Point& p)const
	{
		return Point(x + p.x, y + p.y);
	}


	Point operator-(const Point& p)const
	{
		return Point(x - p.x, y - p.y);
	}


	Point operator/ ( Point& p) 
	{
		return Point(((p.x + x) / 2), (p.y + y) / 2);
	}


	void print() 
	{
		cout << "(" << x << "," << y << ")"<<endl;
	}

};

void main()
{
	Point d(1,3);
	Point d2(0, 1);
	Point d1;
	d1 = d;
	d.print();
	d1.print();
	Point d3 = d1 + d;
	d3.print();
	Point d4 = d2 / d; 
	d4.print();

	system("pause");
}