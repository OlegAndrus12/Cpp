#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class StringsWork
{
private:
	char str[256];
public:
	StringsWork()
	{
		for (int i = 0;i < 256;++i)
		{
			str[i] = '\0';
		}
	}

	void operator+ (char *);
	void getStr();
};
void StringsWork :: operator+ (char *s)
{
	strcat(str, s);
}
void StringsWork ::getStr()
{
	cout << str << endl << endl;
}

void main()
{
	setlocale(LC_CTYPE, "ukr");

	char *str1 = new char[strlen("���� ��� ������� ��������;\n") + 1];
	char *str2 = new char[strlen("� ������� ��� ���� �����.;\n") + 1];
	char *str3 = new char[strlen("������ �� ��� ��� ���������,;\n") + 1];
	char *str4 = new char[strlen("��������� �� ��� ������.;\n") + 1];

	strcpy(str1,"���� ��� ������� ��������;\n" );
	strcpy(str2, "� ������� ��� ���� �����.;\n");
	strcpy(str3, "������ �� ��� ��� ���������,;\n");
	strcpy(str4, "��������� �� ��� ������.;\n");
	cout << "1)" << str1;
	system("pause");
}
