#include <iostream>

using namespace std;

const int N = 100;

class Array
{
private:
	int a[N];
public:
	Array()
	{
		for (int i = 0;i < N;++i)
		{
			a[i] = 0;
		}
	}
	// a[k] і a[k]= якесь число;;
	int& operator[] (int k)
	{
		if ((k < 0) || (k >= N))
		{
			cout << "Error of indexsation" << endl;
			system("pause");
			exit(1);
			
		}
		return a[k];
	}
	
	~Array()
	{

	}

};

int main()
{
	Array a1;
	a1[2] = 2;
	cout << a1[2]<< endl;
	system("pause");
	return 0;
}