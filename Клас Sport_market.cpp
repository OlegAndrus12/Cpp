#include<iostream>
#include<string>

using namespace std;

class Sport_market
{
private:
	double price;
	double amount;
	double day;
	double month;
	double year;
	string name;
	string country;
public:
	Sport_market()
	{
		cout << endl;
		price = 0;
		amount = 0;
		day = 00;
		month = 00;
		year = 0000;
		name = "Empty name";
		country = "Empty country";
		cout << "Hi! I'm a constructor" << endl;
		please_show_me();
		cout << endl;
	}
	Sport_market(string name_1, string country_1)
	{
		cout << endl;
		name = name_1;
		country = country_1;
		cout << "Hello! I'm overload constructor" << endl;
		please_show_me();
		cout << endl;
	}
	void set_price_amount(double price_1, double amount_2)
	{
		price = price_1;
		amount = amount_2;
	}
	void set_date(double date_day, double date_month, double date_year)
	{
		day = date_day;
		month = date_month;
		year = date_year;
	}
	void set_inf(string name_1, string country_1)
	{
		name = name_1;
		country = country_1;
	}
	void please_show_me()
	{
		cout << endl;
		cout << "Name : " << name << endl;
		cout << "Country : " << country << endl;
		cout << "Price : " << price << endl;
		cout << "Amount : " << amount << endl;
		cout << "Date : " << day << "." << month << "." << year << "." << endl;
	}
	~Sport_market()
	{
		cout << "I'm here. I'm not an empty place" << endl;
	}
};
int main()
{
	Sport_market Ball
	Ball.
	Ball.set_inf("Ball", "Pakustan");
	Ball.set_price_amount(340, 18);
	Ball.set_date(11, 02, 2013);
	Ball.please_show_me();
	Sport_market Boots("Boots", "USA");
	Boots.set_price_amount(500, 15);
	Boots.set_date(4, 10, 2015);
	Boots.please_show_me();
	cin.get();
	return 0;
}