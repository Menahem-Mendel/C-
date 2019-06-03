// Составьте программу, которая осуществляет обработку входных данных с помощью двумерных массивов.
// При выполнении лабораторной работы следует учесть следующее :
// 1. Дать пользователю возможность выбора: вводить входные данные с консоли, вводить их из файла;
// в случае ввода с консоли продемонстрировать возможность пере напрямлення потока ввода / вывода на файл .
// 2. При программировании однотипных подзадач (сортировка, ввод / вывод массивов, нахождения суммы столбца матрицы и т.д.) следует оформлять их в виде функций.

// Вариант 4. Введите матрицу А размерностью(n x n),
// где n ≥ 7.
// Выполните следующие задачи:
// 1. найдите максимальный элемент из всех элементов матрицы, оба индекса которых парные;
// 2. найдите минимальный элемент главной диагонали;
// 3. приведите в порядок по возрастанию значения элементов строки, где находится минимальный элемент.

#include <iostream>
#include <fstream>
#include "lab9.hpp"

using namespace std;

int main()
{
	int _size;			  // size of _array[_size * _size]
	char _inputselection; // 1 - terminal 0 - file
	int **_array;		  // _array of numbers[][]

	_size = array_size();

	cout << "Do you want to enter data from the console? \"T\" - true, \"F\" - false " << endl;
	cin >> _inputselection;

	_array = array_constructor(_array, _size);

	if (_inputselection == 'T' || _inputselection == 't')
	{
		inputT(_array, _size);
	}
	else
	{
		output_to_file();
		inputF(_array, _size);
	}
	max_elemnt_indexes_even(_array, _size);
	int i_string = min_element_main_diagonal(_array, _size);

	bubblesort(_array, i_string, _size);
	printArray(_array, _size);

	array_destructor(_array, _size);
	return 0;
}