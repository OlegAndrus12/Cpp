#include<iostream>
#include <cmath>

using namespace std;

class Tester
{
private:
	int a, b, c;
public:
	void set(int a, int b, int c)
	{
		this-> a = a;
		this-> b = b;
		this -> c = c;
	}
	void get()
	{
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}
};


int main()
{
	Tester gn;
	gn.set(1, 32, 31);
	gn.get();
	system("pause");
	return 0;
}

