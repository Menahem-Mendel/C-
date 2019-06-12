#include <iostream>
#include <fstream>

#include "lab9.hpp"

using namespace std;

int array_size()
{
	int n;

	cout << "enter: ";
	cin >> n;

	while (n < 7)
	{
		cout << "error: array size must be greater than 6" << endl
			 << "enter: ";
		cin >> n;
	}
	return n;
}

void inputT(int **_arrayT, int _sizeT)
{
	int i_index;
	int j_index;
	for (i_index = 0; i_index < _sizeT; i_index++)
	{
		for (j_index = 0; j_index < _sizeT; j_index++)
		{
			cout << "[" << i_index << "]"
				 << "[" << j_index << "]" << endl;
			cin >> _arrayT[i_index][j_index];
		}
	}
}

void inputF(int **_arrayF, int _sizeF)
{

	int i_index;
	int j_index;
	ifstream input;

	input.open("lab9/input.txt");

	if (input.is_open())
	{
		for (i_index = 0; i_index < _sizeF && !input.eof(); i_index++)
		{
			for (j_index = 0; j_index < _sizeF && !input.eof(); j_index++)
			{
				input >> _arrayF[i_index][j_index];
				// cout << "[" << i_index << "]"
				// 	 << "[" << j_index << "] = "
				// 	 << _arrayF[i_index][j_index] << endl;
			}
		}
		input.close();
	}
	else
	{
		cout << "error file not opened" << endl;
	}
}

void output_to_file()
{
	int i_index;
	ofstream output;

	output.open("lab9/input.txt");

	if (output.is_open())
	{
		for (i_index = 1000; i_index >= 0; i_index--)
			output << i_index << " ";
	}

	output.close();
}

int **array_constructor(int **a, int n)
{
	int i;

	a = new int *[n];

	for (i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	int i_index;
	int j_index;
	for (i_index = 0; i_index < n; i_index++)
	{
		for (j_index = 0; j_index < n; j_index++)
		{
			a[j_index][i_index] = 0;
		}
	}
	return a;
}

void array_destructor(int **a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}

void printArray(int **arr, int limit)
{

	int i_index;
	int j_index;

	for (i_index = 0; i_index < limit; i_index++)
	{
		for (j_index = 0; j_index < limit; j_index++)
		{
			cout << "arr["
				 << i_index << "]["
				 << j_index << "] = "
				 << arr[i_index][j_index] << endl;
		}
	}
}

void max_elemnt_indexes_even(int **arr, int limit)
{

	int i_index;
	int j_index;
	int save_i, save_j;
	int max;

	max = -32000;
	for (i_index = 0; i_index < limit; i_index++)
	{
		for (j_index = 0; j_index < limit; j_index++)
		{
			if (i_index % 2 == 0 && j_index % 2 == 0 && arr[i_index][j_index] > max)
			{
				max = arr[i_index][j_index];
				save_i = i_index;
				save_j = j_index;
			}
		}
	}

	cout << "max_elemnt_indexes_even = "
		 << "[" << save_i << "]"
		 << "[" << save_j << "]"
		 << max << endl;
}

int min_element_main_diagonal(int **arr, int limit)
{
	int i_index;
	int j_index;
	int save_i, save_j;
	int min;

	min = 32000;

	for (i_index = 0; i_index < limit; i_index++)
	{
		for (j_index = 0; j_index < limit; j_index++)
		{
			if (i_index == j_index && arr[i_index][j_index] < min)
			{
				min = arr[i_index][j_index];
				save_i = i_index;
				save_j = j_index;
			}
		}
	}
	cout << "min_element_main_diagonal = "
		 << "[" << save_i << "]"
		 << "[" << save_j << "]"
		 << min << endl;
	return save_i;
}

void bubblesort(int **arr, int i_index, int limit)
{
	int i, j;
	for (i = 0; i < limit - 1; i++)
	{
		for (j = 0; j < limit - i - 1; j++)
		{
			if (arr[i_index][j] > arr[i_index][j + 1])
			{
				swap(&arr[i_index][j], &arr[i_index][j + 1]);
			}
		}
	}
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}