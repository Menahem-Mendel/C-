#include <iostream>
#include <chrono>

#include "lab4.hpp"

using namespace std;

void duration_run(void (*sort)(int[], int), int _array[], int _size)
{
	int array_copy[ARRAYSIZE] = {0};

	copy(array_copy, _array, 0, _size);

	// start
	auto _start = chrono::steady_clock::now();

	sort(array_copy, _size);

	// end
	auto _end = chrono::steady_clock::now();

	cout << "the program was running\t" << chrono::duration_cast<chrono::seconds>(_end - _start).count() << " seconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::milliseconds>(_end - _start).count() << " milliseconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::microseconds>(_end - _start).count() << " microseconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::nanoseconds>(_end - _start).count() << " nanoseconds" << endl;
}

void duration_run__diapasone(void (*sortq)(int[], int, int), int _array[], int i_left, int i_right)
{
	int array_copy[ARRAYSIZE] = {0};

	copy(array_copy, _array, i_left, i_right);

	// start
	auto _start = chrono::steady_clock::now();

	sortq(array_copy, i_left, i_right);

	// end
	auto _end = chrono::steady_clock::now();

	cout << "the program was running\t" << chrono::duration_cast<chrono::seconds>(_end - _start).count() << " seconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::milliseconds>(_end - _start).count() << " milliseconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::microseconds>(_end - _start).count() << " microseconds" << endl;
	cout << "the program was running\t" << chrono::duration_cast<chrono::nanoseconds>(_end - _start).count() << " nanoseconds" << endl;
}