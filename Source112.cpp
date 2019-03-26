#include <stack>
#include <string>
#include <iostream>
#include "Calculator.h"
#include "Infix_to_prefix_convertion.h"

using namespace std;

int main()
{
	string s;
	cout << "Enter expression : " << endl;
	cin >> s;
	s = infix_to_prefix(s);
	cout << s << endl;
	cout << "Result is : " << calculate(s) << endl;
	system("pause");
	return 0;
}
