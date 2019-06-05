#include <iostream>
#include <fstream>

#include "lab4.hpp"

using namespace std;

void file_fill(int _array[], int _size, char file_name[])
{
	int _index;

	ofstream output;
	output.open(file_name);

	if (output.is_open())
	{
		for (_index = 1000; _index >= 0; _index--)
			output << _index << " ";
	}

	output.close();
}