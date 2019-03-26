#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Human
{
protected:
	string name;
	string second_name;
	unsigned old;
public:
	Human(string name = "Oleg", string second_name = "Andrus", unsigned old = 17)
	{
		this->name = name;
		this->second_name = second_name;
		this->old = old;
	}
	friend ostream& operator<<(ostream & ost, const Human & obj)
	{
		ost << "Name: " << obj.name << " Second name: " << obj.second_name << " Old: " << obj.old << endl;
		return ost;
	}
	friend istream& operator>>(istream & ist, Human & obj)
	{
		ist >> obj.name >> obj.second_name >> obj.old;
		return ist;
	}
	void get_inf()
	{
		cout << "Name: " << name << " Second name: " << second_name << " Old: " << old << endl;
	}
	string get_name()
	{
		return name;
	}
	string get_second_name()
	{
		return second_name;
	}
	unsigned get_old()
	{
		return old;
	}
};

class Sportsman : public Human
{
protected:
	string kind;
	unsigned experience;
public:
	Sportsman(string name = "Oleg", string second_name = "Andrus", unsigned old = 17, string kind = "Empty", unsigned experience = 3)
	{
		Human(name, second_name, old);
		this->kind = kind;
		this->experience = experience;
	}
	Sportsman(Human & obj, string kind = "Empty", unsigned experience = 3):Human(obj)
	{
		this->kind = kind;
		this->experience = experience;
	}
	void get_inf()
	{
		Human::get_inf();
		cout << "Kind: " << kind << " Experience: " << experience << endl;
	}
	friend ostream& operator<<(ostream & ost, const Sportsman & obj)
	{
		ost << "Name: " << obj.name << " Second name: " << obj.second_name << " Old: " << obj.old << " Kind: " << obj.kind << " Experience: " << obj.experience << endl;
		return ost;
	}
	friend istream& operator>>(istream & ist, Sportsman & obj)
	{
		ist >> obj.name >> obj.second_name >> obj.old >> obj.kind >> obj.experience;
		return ist;
	}
};
void main()
{
	Human Bob;
	cin >> Bob;
	Human * sp = & Bob;
	cout << sp->get_old() << endl;
	system("pause");
}

