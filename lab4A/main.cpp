// разработать программу, которая реализует три алгоритма сортировки массивов по методу:
// 1. быстрой сортировки;
// 2. сортировки выбором;
// 3. пирамидальной сортировки

// выходной массив - массив целых чисел, который загружается из текстового файла.
// Для формирования текстового файла написать отдельную программу (или функцию в меню программы).
// числа для записи в файл избираются случайным образом из диапазона, который вводится по запросу с клавиатуры.ъ

// результирующий отсортированный массив записать в другой файл (на экран результирующий массив выводить не надо).

// рассмотреть тестовые примеры с размерами массивов 100, 500, 1000, 5000, 10000, 30000, 50000 элементов.
// программно определить время работы каждого из алгоритмов на каждом из тестовых примеров с различными размерами массивов.
// для каждого из размеров массива рассмотреть три случая исходных данных:
// 1. массив случайных чисел - средний случай;
// 2. отсортированный массив - лучший вариант;
// 3. массив, отсортированный в обратном порядке (по убыванию) - худший случай.

#include <iostream>
#include <ctime>

#include "lab4.hpp"

using namespace std;

int main()
{
	// variable initialization
	int _size,
		min_element,
		max_element;

	char output[] = "lab4A/output.txt",
		 input[] = "lab4A/input.txt";

	int _array[ARRAYSIZE] = {0};

	// variable definition
	_size = 30000;
	min_element = 0;
	max_element = 1000;

	// заполнение массива
	// random_fill(_array, _size, min_element, max_element); // рандомно
	ascending_fill(_array, _size); // по возрастанию
	// descending_fill(_array, _size); 						 // по убыванию

	file_out(_array, _size, input);
	file_fill(_array, _size, input);

	// cout << "before =\t";
	// print_array(_array, _size);

	// sort
	// selection_sort(_array, _size);
	cout << "selection_sort" << endl;
	duration_run(selection_sort, _array, _size);
	cout << endl;

	// quick_sort(_array, 0, _size - 1);
	cout << "quick_sort" << endl;
	duration_run__diapasone(quick_sort, _array, 0, _size - 1);
	cout << endl;

	// heap_sort(_array, _size);
	cout << "heap_sort" << endl;
	duration_run(heap_sort, _array, _size);
	cout << endl;

	// cout << "after =\t";
	// print_array(_array, _size);

	heap_sort(_array, _size);
	file_out(_array, _size, output);
	return 0;
}