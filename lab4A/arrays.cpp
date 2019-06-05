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