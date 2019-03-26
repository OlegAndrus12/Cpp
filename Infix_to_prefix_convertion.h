#pragma once
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_operator(char c) // ���������� ���������� �����
{
	return (!isalpha(c) && !isdigit(c));
}

int get_priority(char C) // ���������� ��������� ��� ��������
{
	if (C == '-' || C == '+')
	{
		return 1;
	}
	else if (C == '*' || C == '/')
	{
		return 2;
	}
	else if (C == '^')
	{ 
		return 3;
	}
	return 0;
}

string infix_to_postfix(string put_inf)
{
	put_inf = '(' + put_inf + ')';
	int l = put_inf.size();
	stack<char> char_stack;
	string result;

	for (int i = 0; i < l; i++) 
	{
		// ���� ������ � ���������, �� ������ ���� � ������
		if (isalpha(put_inf[i]) || isdigit(put_inf[i]))
		{
			result += put_inf[i];
		}
		// ���� ������ � '(', �� �������� ���� � ����
		else
		{
			result += ' ';
			if (put_inf[i] == '(')
			{
				char_stack.push('(');
			}
			// ���� ������ � ')', �� �������� � ����� �������� � ������ �� � ������, ������ �� ��������� � ����� ������ '('
			else if (put_inf[i] == ')')
			{

				while (char_stack.top() != '(')
				{
					result += char_stack.top();
					char_stack.pop();
				}

				//  ������� '(' � �����
				char_stack.pop();
			}
			// ���� ������� �������� ��������
			else
			{

				if (is_operator(char_stack.top()))
				{
					while (get_priority(put_inf[i]) <= get_priority(char_stack.top()))
					{
						result += char_stack.top();
						char_stack.pop();
					}
					// ������� �������� �������� �� �����
					char_stack.push(put_inf[i]);
				}
			}
		}
	}
	return result;
}

string infix_to_prefix(string put_inf)
{
	
	int length = put_inf.size();
	reverse(put_inf.begin(), put_inf.end());

	for (int i = 0; i < length; i++)
	{
		if (put_inf[i] == '(') 
		{
			put_inf[i] = ')';
			i++;
		}
		else if (put_inf[i] == ')')
		{
			put_inf[i] = '(';
			i++;
		}
	}

	string prefix_exp = infix_to_postfix(put_inf);

	reverse(prefix_exp.begin(), prefix_exp.end());

	return prefix_exp;
}
