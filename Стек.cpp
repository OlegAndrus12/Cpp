#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

template <class T>

//LIFO - last in, first out
//			or
//FILO - First in, last out 

class Stack
{
private:
	T * arr;//�������� �� ������ ������� ������
	int top;//������� ����� - ������� ������
	const size_t size;// ������� ������
public:
	//����������� �����, ���� ���������
	Stack(size_t size = 10) :size(size)
	{
		arr = new T[size];
		top = 0;
	}
	// ���������� ����� 
	~Stack()
	{
		delete [] arr;
	}
	//����������� ���������
	Stack(const Stack & obj) :size(obj.size)
	{
		arr = new T[size];
		top = obj.top;
		for (int i = 0; i < top; ++i)
		{
			arr[i] = obj.arr[i];
		}
	}
	//getter-����� ��� ������� �� ��������� �� ����
	inline T * get_arr() const
	{
		return arr;
	}
	//inline  ������� ��� ������� ���� � ��������, ���� ���� �������� ��������������� ��� �������� ������� ����; �������� ��� ��������� ��������.
	//push - �������, ��� ���� �������� �� �����. ���� ������, �� ��������� ������ ������.
	inline void push(T elem)
	{
		if (top < size)//����������, �� � � ����� �� ���� ��� ������ ��������, �� ���� ���������
		{
			arr[top] = elem;
			++top;
		}
		else
		{
			cout << "Stack is overlow" << endl;
		}
	}
	//pop - �������, ��� ������ �������� � �����. ��������� ������ � ������, �������� �� ��, ��� ���� �� ��� �������
	inline const T & pop()
	{
		if (top > 0)
		{
			--top;
			return arr[top];
			
		}
		else
		{
			cout << "Stack is underlow" << endl;
			return 0;
		}
	}
	//�����, �� ������� n-�� ������� �� ������� �����

	inline const void search(int n)
	{
		if ((n <= top) && (n >= 0))
		{
			cout << n << "th element from the top is " << arr[top - n] << endl;
		}
	}
	/*inline const T search(int n)
	{
		if ((n <= top) && (n >= 0))
		{
			return arr[top - n];
		}
		else
		{
			return 0;
		}
	}
	*/
	//getter-������� ��� ���������� ��������� �����
	inline size_t get_size()
	{
		return size;
	}
	//getter-������� ��� ���������� ������� �������� � �����
	inline int get_amount()
	{
		return top;
	}

	// �����, ��� ����������� ����� � ������
	inline void print_stack()
	{
		cout << "		This is your stack" << endl;
		for (int i = top - 1; i >= 0; --i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};


int main()
{
	Stack <int> A(4);
	cout << A.get_size() << endl;
	for (int i = 0; i < 5; ++i)
	{
		int x;
		cout << "Enter element" << endl;
		cin >> x;
		A.push(x);
	}
	Stack <int> B(A);
	A.print_stack();
	cout << "Stack includes " << A.get_amount() << " elements" << endl;
	B.print_stack();
	A.search(6);
	system("pause");
	return 0;
}