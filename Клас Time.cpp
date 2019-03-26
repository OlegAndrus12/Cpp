#include <iostream>
#include <cmath>

using namespace std;

class Time
{
private:
	int sec;
	int min;
	int hour;
public:
	Time() : sec(0), min(0), hour(0)
	{
	}
	Time(int a, int b, int c) : hour(a), min(b), sec(c)
	{

	}
	void showTime()
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}
	void System_12()
	{
		if (hour > 12)
		{
			hour -= 12;
		}
	}
	void System_24()
	{
		if (hour <= 12)
		{
			hour += 12;
		}
		if (hour == 24)
		{
			hour=0;
		}
	}

	Time operator+ (Time t2)
	{
		Time result;
		result.sec = sec + t2.sec;
		if (result.sec >= 60)
		{
			result.sec -= 60;
			result.min += 1;
		}
		result.min += min + t2.min;
		if (result.min >= 60)
		{
			result.min -= 60;
			result.hour += 1;
		}
		result.hour += hour + t2.hour;
		if (result.hour >= 24)
		{
			result.hour -= 24;
		}
		return result;
	}

	Time operator- (Time t2)
	{
		Time result;
		if (sec >= t2.sec)
		{
			result.sec = sec - t2.sec;
		}
		else
		{
			sec += 60;
			min -= 1;
			result.sec = sec - t2.sec;
		}
		if (result.sec >= 60)
		{
			result.sec -= 60;
			result.hour += 1;
		}
		if (min >= t2.min)
		{
			result.min = min - t2.min;
		}
		else
		{
			min += 60;
			hour -= 1;
			result.min = min - t2.min;
		}
		if (result.min >= 60)
		{
			result.min -= 60;
			result.hour += 1;
		}
		if (hour >= t2.hour)
		{
			result.hour =hour - t2.hour;
		}
		else
		{ 
			hour += 24;
			result.hour = hour - t2.hour;
		}
		if (result.hour >= 24)
		{
			result.hour -= 24;
		}
		return result;
	}

	bool operator> (Time t2)
	{
		int sec1 = hour * 3600 + min * 60 + sec;
		int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
		return ((sec1 > sec2) ? true : false);
	}
	bool operator< (Time t2)
	{
		int sec1 = hour * 3600 + min * 60 + sec;
		int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
		return ((sec1 < sec2) ? true : false);
	}
	bool operator>= (Time t2)
	{
		int sec1 = hour * 3600 + min * 60 + sec;
		int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
		return ((sec1 >= sec2) ? true : false);
	}
	bool operator<= (Time t2)
	{
		int sec1 = hour * 3600 + min * 60 + sec;
		int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
		return ((sec1 <= sec2) ? true : false);
	}
	~ Time()
	{

	}
};

int main()
{
	Time NewYork(1, 52, 11);
	Time Kyiv(1, 52, 13);
	Time Lviv;
	Lviv = NewYork - Kyiv;
	if (NewYork > Kyiv)
	{
		cout << "New YorK > Kyiv" << endl;
	}
	else
	{
		cout << "New York <= Kyiv" << endl;
	}
	Lviv.showTime();
	Lviv.System_12();
	Lviv.showTime();
	Lviv.System_24();
	Lviv.showTime();
	system("pause");
	return 0;
}