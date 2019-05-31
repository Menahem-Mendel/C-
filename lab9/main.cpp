#include <iostream>
#include <fstream>
#include "lab9.hpp"

using namespace std;

int setSizeOfArr(int **);
void createArray(int **, int);
void deleteArray(int **, int);
int inputValues(int **, int);

int main()
{
	char choice;
	int **arr;
	int size;
	int **pointer;

	size = 0;

	cout << "\nyou want terminal or file? t or f" << endl;
	cin >> choice;
	if (choice == 'f')
	{
	}
	else
	{
		if (choice != 't')
			cout << "\ni'll take it like terminal" << endl;

		size = setSizeOfArr(arr);

		createArray(arr, size);

		**pointer = inputValues(arr, size);

		cout << size << endl;
	}

	deleteArray(arr, size);
	return 0;
}

int setSizeOfArr(int **arr)
{
	int sizearr;

	sizearr = 0;

	while (sizearr < 7)
	{
		cin >> sizearr;

		if (sizearr < 7)
			cout << "sizearr < 7!" << endl;
	}
	return sizearr;
}

void deleteArray(int **arr, int size)
{
	for (int i = 0; i < size; ++i)
		delete[] arr[i];
	delete[] arr;
}

void createArray(int **array, int size)
{
	int i_arr;

	array = new int *[size];

	for (i_arr = 0; i_arr < size; ++i_arr)
		array[i_arr] = new int[size];
}

int inputValues(int **, int)
{
}