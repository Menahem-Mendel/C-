#include <iostream>

#include "lab2.hpp"

using namespace std;

void calculator(char input)
{
	int number;
	int op2;

	if (input >= '0' && input <= '9')
	{
		number = input - '0';
		push(number);
	}
	else if (input == '+')
	{
		push(pop() + pop());
	}
	else if (input == '-')
	{
		op2 = pop();
		push(pop() - op2);
	}
	else if (input == '*')
	{
		push(pop() * pop());
	}
	else if (input == '/')
	{
		op2 = pop();
		push(pop() / op2);
	}
}
