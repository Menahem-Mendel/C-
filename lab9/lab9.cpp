#include <iostream>
#include <fstream>
#include "lab9.hpp"

using namespace std;

void printArray(int arr[], int limit)
{
	int index;

	for (index = 0; index < limit && arr[index] != 0; index++)
	{
		cout << "arr[" << index << "] = " << arr[index] << endl;
	}
	if (index == 0)
	{
		cout << "this file does not contain numeric values\n"
			 << endl;
	}
}
