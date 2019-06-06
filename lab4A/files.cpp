#include <iostream>
#include <fstream>

#include "lab4.hpp"

using namespace std;

void file_out(int _array[], int _size, char _file_name[])
{
	int _index;

	ofstream output;
	output.open(_file_name);

	if (output.is_open())
	{
		for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
			output << _array[_index] << endl;
	}
	else
	{
		cout << "error file out not opened" << endl;
	}

	output.close();
}

void file_fill(int _array[], int _size, char _file_name[])
{
	int _index;
	
	ifstream input;
	input.open(_file_name);

	if (input.is_open())
	{
		for (_index = 0; _index < MIN(_size, ARRAYSIZE) && !input.eof(); _index++)
		{
			input >> _array[_index];
		}
		input.close();
	}
	else
	{
		cout << "error file in not opened" << endl;
	}
}
