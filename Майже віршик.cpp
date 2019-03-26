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

	char *str1 = new char[strlen("Еней був парубок моторний;\n") + 1];
	char *str2 = new char[strlen("І хлопець хоч куди козак.;\n") + 1];
	char *str3 = new char[strlen("Удавсь на всеє зле проворний,;\n") + 1];
	char *str4 = new char[strlen("Завзятіший од всіх бурлак.;\n") + 1];

	strcpy(str1,"Еней був парубок моторний;\n" );
	strcpy(str2, "І хлопець хоч куди козак.;\n");
	strcpy(str3, "Удавсь на всеє зле проворний,;\n");
	strcpy(str4, "Завзятіший од всіх бурлак.;\n");
	cout << "1)" << str1;
	system("pause");
}
