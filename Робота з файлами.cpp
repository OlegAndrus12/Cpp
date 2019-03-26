#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
	char*A;
	A = new char[20];
	ifstream reading("Text.txt");
	while (!reading.eof())
	{
		reading >> A;
		bool check(true);
		for (int i = 0;i < strlen(A);++i)
		{
			check = check&(A[i] == A[strlen(A) - 1]);
		}
		if (check)
		{
			cout << A;
		}
	}
	ofstream vvid("Text.txt");
	vvid << "SDSA";
	vvid.close();
		
	system("pause");
	return 0;
}