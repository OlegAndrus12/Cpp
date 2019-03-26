#include<iostream>
#include<cmath>

using namespace std;

class b;

class a 
{
private:
	int i = 0;
public:
	a () {
		cout << "Enter i" << endl;
		cin >> i;
}
	friend int sum(a, b);
};
	class b
	{
	private:
		int j;
	public:
		b() {
			cout << "Enter j" << endl;
			cin >> j;
		}
		friend int sum(a, b);
	};

	int sum(a first_number, b second_number)
	{
		return (first_number.i + second_number.j);
	}



int main()
{
	a first;
	b second;
	cout << "Sum is " << sum(first, second) << endl;
	system("pause");
	return 0;
}
