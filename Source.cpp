#include<iostream>
#include <string>
#include <fstream>

using namespace std;

class Auto
{
protected:
	string mark;
	int date;
	double speed;
public:
	Auto(string mark = "Empty", int date = 1, double speed = 12)
	{
		this->speed = speed;
		this->mark = mark;
		this->date = date;
	}
	string get_mark()
	{
		return mark;
	}
	virtual void Take()
	{
		cin >> mark >> date >> speed;
	}
	virtual void Give()
	{
		cout << mark << "|" << date << "|" << speed << endl;
	}
};
class Track : public Auto
{
	private:
		double tonnage;
public:

};

void main()
{
	system("pause");
}