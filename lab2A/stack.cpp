#include <iostream>
#include <climits>

#include "lab2.hpp"

using namespace std;

int _stack[STACKSIZE];
unsigned int sp = 0U;

void push(int input)
{
	if (sp < STACKSIZE)
	{
		_stack[sp++] = input;
		return;
	}

	cout << "error: stack full" << endl;
}

int pop()
{
	if (sp != 0)
		return _stack[--sp];

	cout << "error: stack empty" << endl;
	return 0.0;
}

int top()
{
	if (sp != 0)
		return _stack[sp];

	cout << "error: stack empty" << endl;
	return 0.0;
}

void print_stack()
{
	int index = sp - 1;
	if (index < 0)
	{
		cout << "stack empty" << endl;
		return;
	}
	while (index >= 0)
	{
		cout << "stack[" << index << "] = " << _stack[index] << endl;
		index--;
	}
}

void clear_stack()
{
	sp = 0;
}

unsigned int top_index()
{
	return sp - 1;
}