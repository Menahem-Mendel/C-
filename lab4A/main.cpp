#include <iostream>
#include <ctime>

#include "lab4.hpp"

using namespace std;

int main()
{
	// variable initialization
	time_t _start,
		_end;

	int _size,
		_from,
		_to;

	char output[] = "lab4A/output.txt";
	char input[] = "lab4A/input.txt";
	int _array[ARRAYSIZE] = {0};

	// variable definition
	_size = 20;
	_from = 0;
	_to = 9;

	// start
	_start = clock();

	// fill array with values
	// random_fill(_array, _size, _from, _to);
	// ascending_fill(_array, _size);
	// descending_fill(_array, _size);
	file_fill(_array, _size, input);
	cout << "start =\t";
	print_array(_array, _size);

	// sort
	// quick_sort(_array, 0, _size - 1);
	// selection_sort(_array, _size);
	heap_sort(_array, _size);
	cout << "end =\t";
	print_array(_array, _size);
	file_out(_array, _size, output);

	// end
	_end = clock() - _start;

	cout << "the program was running " << (double)_end / CLOCKS_PER_SEC << " seconds" << endl;
	return 0;
}