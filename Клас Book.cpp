#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	string name;
	string author;
	string publishment;
	unsigned day;
	unsigned month;
	unsigned year;
public:
	void set_date(unsigned date_day, unsigned date_month, unsigned date_year)
	{
		day = date_day;
		month = date_month;
		year = date_year;
	}
	void set_some_information(string inf_name, string inf_author, string inf_publishment)
	{
		name = inf_name;
		author = inf_author;
		publishment = inf_publishment;
	}
	void main_inf_book()
	{
		cout << "Name : " << name << endl;
		cout << "Author : " << author << endl;
		cout << "Publishment : " << publishment << endl;
		cout << "Date : " << day << "." << month << "." << year << endl;
	}
};
int main()
{
	Book number1;
	cout << "First book"<<endl;
	number1.set_some_information("My first love", "Rollay Vect", "Old Lion");
	number1.set_date(01, 10, 2013);
	number1.main_inf_book();
	Book number2;
	
	cout << endl << "Second book" << endl;
	number2.set_some_information("How become succesfull", "Mr Unknown", "New York Times");
	number2.set_date(02, 03, 2015);
	number2.main_inf_book();
	system("pause");
	return 0;
}