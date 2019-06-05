#include <iostream>
#include <ctime>

#include "lab4.hpp"

using namespace std;

void print_array(int[], int);

int main()
{
	// variable initialization
	time_t _start,
		_end;

	int _size,
		_from,
		_to;

	int _array[ARRAYSIZE] = {0};

	// variable definition
	_size = 10;
	_from = 100;
	_to = 110;
	_start = clock();

	// start
	descending_fill(_array, _size);
	print_array(_array, _size);

	cout << endl;

	// quick_sort(_array, 0, _size - 1);
	// selection_sort(_array, _size);
	heap_sort(_array, _size);
	print_array(_array, _size);
	// end

	_end = clock() - _start;

	cout << "the program was running " << (double)_end / CLOCKS_PER_SEC << " seconds" << endl;
	return 0;
}

void print_array(int _array[], int _size)
{
	int _index;

	for (_index = 0; _index < MIN(_size, ARRAYSIZE); _index++)
		cout << "_array[" << _index << "] = " << _array[_index] << endl;
}