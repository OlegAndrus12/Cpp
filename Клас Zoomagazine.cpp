#include <iostream>
#include<cmath>
using namespace std;
class Zoomagazine
{
private:
	double price;
	double amount;
public:
	Zoomagazine(int A, int B)
	{
		price = A;
		amount = B;
	cout << "This is example of a constructure's work" << endl;
	cout << "Price : " << price << endl;
	cout << "Amount : " << amount << endl;
		
	}
	void setZoomagazine()
	{
		cout << "Enter price" << endl;
		cin >> price;
		cout << "Enter Amount" << endl;
		cin >> amount;
	}
	void getZoomagazine()
	{
		cout << "Price : " << price << endl;
		cout << "Amount is : " << amount << endl;
	}
	~Zoomagazine()
	{
		cout << "It's a result of destructor" << endl;
	}
};

int main()
{
	Zoomagazine Cat(100,100);
	Cat.setZoomagazine();
	Cat.getZoomagazine();
	Zoomagazine Dog(200,200);
	system("pause");
	return 0;
}