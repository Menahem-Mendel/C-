#include <iostream>
#include <random>
#include <ctime>

#include "lab4.hpp"

using namespace std;

void random_fill(int _array[], int _size, int min, int max)
{
	int _index;

	srand(time(NULL));

	for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
	{
		_array[_index] = DIAPASONE(min, max);
	}
}

void ascending_fill(int _array[], int _size)
{
	int _index;

	for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
		_array[_index] = _index;
}

void descending_fill(int _array[], int _size)
{
	int _index;

	for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
		_array[_index] = MIN(_size, ARRAYSIZE) - _index - 1;
}

void print_array(int _array[], int _size)
{
	int _index;

	for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
		cout << _array[_index] << " ";
	cout << endl;
}

void print_array_diapasone(int _array[], int _from, int _to)
{
	int _index;

	for (_index = _from; _index < MIN(_to, ARRAYSIZE); _index++)
		cout << _array[_index] << " ";
	cout << endl;
}

void copy(int A1[], int A2[], int i_left, int i_right)
{
	while (i_left <= i_right)
	{
		A1[i_left] = A2[i_left];
		i_left++;
	}
}