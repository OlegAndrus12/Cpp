#include <iostream>
#include<fstream>

using namespace std;
int main()
{
	char text[111];
	ofstream file_text("File.txt", ios_base::app);
	file_text << "Just smile" << endl;
	file_text.close();
	system("pause");
	return 0;

}