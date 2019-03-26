#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n1, n2;
	cout << "Enter n1, n2" << endl;
	cin >> n1 >> n2;
	vector <int> vec1(n1);
	vector <int> vec2(n2);
	cout << "Enter first vector : " << endl;
	for (int i = 0; i < vec1.size(); ++i)
	{
		cin >> vec1[i];
	}
	cout << "Enter second vector : " << endl;
	for (int i = 0; i < vec2.size(); ++i)
	{
		cin >> vec2[i];
	}
	cout << "First vector : " << endl;
	for (int i = 0; i < vec1.size(); ++i)
	{
		cout << vec1[i] << " ";
	}
	cout << endl;
	cout << "Second vector : " << endl;
	for (int i = 0; i < vec2.size(); ++i)
	{
		cout << vec2[i] << " ";
	}
	cout << endl;
	int max = vec1[0];
	int index = 0;
	for (int i = 0; i < vec1.size(); ++i)
	{
		if (vec1[i] > max)
		{
			max = vec1[i];
			index = i;
		}
	}
	vec1.insert(vec1.begin() + index, vec2.begin(), vec2.end());
	cout << "Max of first vector is : " << max << endl;
	cout << "First vector : " << endl;
	for (int i = 0; i < vec1.size(); ++i)
	{
		cout << vec1[i] << " ";
	}
	cout << endl;
	// дублювати всі від'ємні елементи, котрі повторюються у векторі = task 1
	// вставити всі елементи другого вектора перед максимальним елементом першого = task 2 || done
	// видалити всі повторні входження у векторі = task 3
	system("pause");
	return 0;

}