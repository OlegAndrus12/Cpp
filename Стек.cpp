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
	T * arr;//вказівник на перший елемент масива
	int top;//вершина стеку - найвища тарілка
	const size_t size;// кількість тарілок
public:
	//конструктор стеку, стек статичний
	Stack(size_t size = 10) :size(size)
	{
		arr = new T[size];
		top = 0;
	}
	// деструктор стека 
	~Stack()
	{
		delete [] arr;
	}
	//конструктор копіювання
	Stack(const Stack & obj) :size(obj.size)
	{
		arr = new T[size];
		top = obj.top;
		for (int i = 0; i < top; ++i)
		{
			arr[i] = obj.arr[i];
		}
	}
	//getter-метод для доступу до вказівника на стек
	inline T * get_arr() const
	{
		return arr;
	}
	//inline  вбудовує код кожного разу у програму, тому його доцільно використовувати при невеликій кількості коду; заощаджує час виконання програми.
	//push - функція, яка додає елементи до стека. Нова тарілка, що ставиться наверх піраміди.
	inline void push(T elem)
	{
		if (top < size)//перевіряємо, чи є у стеку ще місце для нового елемента, бо стек статичний
		{
			arr[top] = elem;
			++top;
		}
		else
		{
			cout << "Stack is overlow" << endl;
		}
	}
	//pop - функція, яка викидає елементи зі стека. Забирають тарілки з піраміди, зважаючи на те, аби стек не був порожнім
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
	//метод, що повертає n-ий елемент від вершини стека

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
	//getter-функція для повернення розмірності стека
	inline size_t get_size()
	{
		return size;
	}
	//getter-функція для повернення кількості елементів у стеці
	inline int get_amount()
	{
		return top;
	}

	// Метод, для відображення стеку у консолі
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