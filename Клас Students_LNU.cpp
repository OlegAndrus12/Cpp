#include <iostream>
#include<cmath>
#include<string>
using namespace std;

class Students_LNU
{
private:
	string name;
	string second_name;
	string academic_group;
	double avarage_mark;
	double current_marks[5];
	string status;
	double dead_line;
public:
	Students_LNU()
	{
		name = second_name = "Unknown";
		academic_group = "PMI-13";
		avarage_mark = 0;
		dead_line = 3;
		for (int i = 0;i < 5;++i)
		{
			current_marks[i] = 0;
		}
	}

	void set_personal_information(string name_inf, string second_name_inf, string academic_group_inf)
	{
		name = name_inf;
		second_name = second_name_inf;
		academic_group = academic_group_inf;
	}
	void dead_line_f(double k)
	{
		dead_line = k;
	}
	void set_results()
	{
		cout << "Enter results" << endl;
		for (int i = 0;i < 5;++i)
		{
			cin >> current_marks[i];
		}
	}
	double average_mark()
	{
		double sum = 0;
		for (int i = 0;i < 5;++i)
		{
			sum += current_marks[i];
		}
		sum /= 5;
		avarage_mark = sum;
		return avarage_mark;
	}
	void print_all_inf()
	{
		cout << "Name : " << name << endl;
		cout << "Second name : " << second_name << endl;
		cout << "Academic group : " << academic_group << endl;
		for (int i = 0;i < 5;++i)
		{
			cout << "Test " << i + 1 << " : " << current_marks[i] << endl;
		}
		cout << "Average mark : " << avarage_mark << endl;
		if (avarage_mark >= dead_line)
		{
			status = "Passed";
			cout << "Status : " << status << endl;
		}
		else
		{
			status = "Unpassed. Maybe next year?";
			cout << "Status : " << status << endl;
		}
	}
	~Students_LNU()
	{

	}
};
int main()
{
	double Mark_of_first_student[5];
	Students_LNU Oleg;
	cout << "Oleg : " << endl;
	Oleg.set_personal_information("Oleg", "Andrus", "PMI-13");
	Oleg.set_results();
	Oleg.dead_line_f(4);
	Oleg.average_mark();
	Oleg.print_all_inf();
	cout << endl;
	Students_LNU Jenn;
	cout << "Jenn" << endl;
	Jenn.set_personal_information("Jenn", "Smachnuy", "PMO-11");
	Jenn.set_results();
	Jenn.average_mark();
	Jenn.print_all_inf();
	system("pause");
	return 0;
}
