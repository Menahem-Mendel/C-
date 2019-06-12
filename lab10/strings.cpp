#include <iostream>

#include "lab10.hpp"

using namespace std;

void fill_array(char *line[], int row, int column)
{
	int i_index;
	int j_index;

	j_index = i_index = 0;

	for (i_index = 0; i_index < row && !cin.eof(); i_index++)
	{
		for (j_index = 0; j_index < column && !cin.eof(); j_index++)
		{
			cin.get(line[i_index][j_index]);

			if (line[i_index][j_index] == ' ')
			{
				break;
			}
			else if (line[i_index][j_index] == '\n')
			{
				line[i_index][j_index] = '\0';
				return;
			}
		}
	}
}

char *array_constructor(char *a, int n)
{
	int i;

	a = new char[n];

	for (i = 0; i < n; i++)
	{
		a[i] = '\0';
	}
	return a;
}

void swap_word(char **a, char **b)
{
	char *temp = *a;
	*a = *b;
	*b = temp;
}

void print_2darray(char *line[], int row)
{
	int i;

	for (i = 0; i < row && *line[i] != '\0'; i++)
	{
		cout << line[i];
	}
	cout << endl;
}