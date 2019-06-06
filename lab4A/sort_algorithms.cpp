#include <iostream>
#include <fstream>
#include <random>
#include <ctime>

#include "lab4.hpp"

using namespace std;

int pass = 0;

// сортировка выбором
// 1. находит минимальный элемент от (i_index) до (_size)
// 2. сохраняет его индекс (min_index)
// 3. и меняет местами минимальный элемент (_array[min_index]) и текущий элемент (_array[i_index])
//
// пример
// массив _array = 5 4 3 2 1
// 1. (1) 4  3  2 (5)
// 2.  1 (2) 3 (4) 5
//
// cложность времени O(n^2) так как есть два вложенных цикла
void selection_sort(int _array[], int _size)
{
	int i_index,
		j_index,
		min_index;

	for (i_index = 0; i_index < _size; i_index++)
	{
		// вывод на консоль
		cout << "___________pass " << ++pass << "___________" << endl;
		print_array(_array, _size);

		min_index = i_index;

		for (j_index = i_index; j_index < _size; j_index++)
		{
			if (_array[j_index] < _array[min_index])
			{
				min_index = j_index;
			}
		}

		swap(&_array[min_index], &_array[i_index]);
	}
}

// быстрая сортировка
// 1. берется за основу любой индекс из массива (_pivot) здесь он равен (i_left + i_right) / 2
// 2. относительно него элементы сортируются на два подмножества: большее и меньшее чем _array[_pivot]
// 3. это происходит рекурсивно поэтому когда остается только один элемент в подмножестве то рекурсия прекращается
//
// пример
// массив _array = 5 4 3 2 1

// ___________pass 1
// меньшее = 0 1
// _pivot  = 2
// большее = 3 4
// ___________pass 2 (меньшее из pass 1)
// меньшее = _
// _pivot  = 0
// большее = 1
// ___________pass 3 (большее из pass 1) рекурсия на меньшем остановилась поэтому сортируются большие элементы
// меньшее = _
// _pivot  = 3
// большее = 4

// cложность времени лучшее O(n*log(n))
// cложность времени среднее O(n*log(n))
// cложность времени худшее O(n^2)
void quick_sort(int _array[], int i_left, int i_right)
{
	int _index,
		_pivot;

	if (i_left >= i_right)
		return;

	swap(&_array[i_left], &_array[(i_left + i_right) / 2]); // поместить средний элемент в начало

	_pivot = i_left;

	for (_index = i_left + 1; _index <= i_right; _index++)
	{
		if (_array[_index] < _array[i_left])
		{
			swap(&_array[++_pivot], &_array[_index]);
		}
	}

	swap(&_array[i_left], &_array[_pivot]); // вернуть средний элемент на место

	// вывод на консоль
	cout << "___________pass " << ++pass << "___________" << endl
		 << "left subset\t= ";
	print_array_diapasone(_array, i_left, _pivot);
	cout << "array[pivot]\t= " << _array[_pivot] << endl
		 << "right subset\t= ";
	print_array_diapasone(_array, _pivot + 1, i_right + 1);

	quick_sort(_array, i_left, _pivot - 1);  // сортировать правую сторону
	quick_sort(_array, _pivot + 1, i_right); // сортировать левую сторону
}

// пирамидальная сортировка
void heap_sort(int _array[], int _size)
{
	for (int _index = _size / 2 - 1; _index >= 0; _index--)
	{
		heapify(_array, _size, _index);

		// вывод на консоль
		cout << "___________pass " << ++pass << "___________" << endl;
		print_array(_array, _size);
	}

	for (int _index = _size - 1; _index >= 0; _index--)
	{
		swap(&_array[0], &_array[_index]);

		heapify(_array, _index, 0);

		// вывод на консоль
		cout << "___________pass " << ++pass << "___________" << endl;
		print_array(_array, _size);
	}
}

// heapify строит примаиду где наверху находится самый большой элемент
void heapify(int _array[], int _size, int _index)
{
	int _largest = _index;
	int _left = 2 * _index + 1;
	int _right = 2 * _index + 2;

	if (_left < _size && _array[_left] > _array[_largest])
		_largest = _left;

	if (_right < _size && _array[_right] > _array[_largest])
		_largest = _right;

	if (_largest != _index)
	{
		swap(&_array[_index], &_array[_largest]);

		heapify(_array, _size, _largest);
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}