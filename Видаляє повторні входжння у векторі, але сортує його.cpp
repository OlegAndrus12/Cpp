#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Would you be so kind anf enter a size of your vector ? " << endl;
	int n;
	cin >> n;
	vector <int> box(n);
	for (auto it = box.begin(); it != box.end(); ++it)
	{
		cin >> *it;
	}
	for (vector<int> ::iterator it = box.begin(); it != box.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	sort(box.begin(), box.end());

	vector <int> ::iterator it = unique(box.begin(), box.end());

	box.resize(distance(box.begin(), it));

	for (vector<int> ::iterator it = box.begin(); it != box.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//��������� �� ��'��� ��������, ���� ������������ � ������ = task 1
	//�������� �� �������� ������� ������� ����� ������������ ��������� ������� = task 2
	// �������� �� ������� ��������� � ������ = task 3
	system("pause");
	return 0;

}