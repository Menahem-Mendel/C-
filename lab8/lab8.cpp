#include <iostream>
#include <fstream>
#include "lab8.hpp"

using namespace std;

void copyodd(int from[], int to[])
{
	int i_from;
	int i_to;

	for (i_to = 0; to[i_to] != 0 && i_to < SPACE * 2; i_to++)
		;

	for (i_from = 0; i_from < SPACE && i_to < SPACE * 2; i_from++)
	{
		if (from[i_from] % 2 == 1)
		{
			to[i_to++] = from[i_from];
		}
	}
}

void copyeven(int from[], int to[])
{
	int i_from;
	int i_to;

	for (i_to = 0; to[i_to] != 0 && i_to < SPACE * 2; i_to++)
		;

	for (i_from = 0; i_from < SPACE && i_to < SPACE * 2; i_from++)
	{
		if (from[i_from] % 2 == 0)
		{
			to[i_to++] = from[i_from];
		}
	}
}

int fileInArray(char file[], int to[])
{
	int index_fia;
	ifstream input;

	input.open(file);

	if (input.is_open())
	{
		for (index_fia = 0; index_fia < SPACE && !input.eof(); index_fia++)
		{
			input >> to[index_fia];
		}
		input.close();
		return 0;
	}
	else
		cout << "error file not opened\n"
			 << endl;
	return 1;
}

void printArray(int arr[], int limit)
{
	int index;

	for (index = 0; index < limit && arr[index] != 0; index++)
	{
		cout << "arr[" << index << "] = " << arr[index] << endl;
	}
	if (index == 0)
	{
		cout << "this file does not contain numeric values\n"
			 << endl;
	}
}