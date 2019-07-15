#include <iostream>

#include "lab10.hpp"

using namespace std;

int main()
{
	// 1
	char *strA[STRINGSIZE];
	char *strB[STRINGSIZE];

	int i;

	for (i = 0; i < STRINGSIZE; i++)
	{
		strA[i] = array_constructor(strA[i], WORDSIZE);
	}
	for (i = 0; i < STRINGSIZE; i++)
	{
		strB[i] = array_constructor(strB[i], WORDSIZE);
	}

	fill_array(strA, STRINGSIZE, WORDSIZE);
	fill_array(strB, STRINGSIZE, WORDSIZE);

	cout << "before" << endl;

	print_2darray(strA, STRINGSIZE);
	print_2darray(strB, STRINGSIZE);

	for (i = 1; i < STRINGSIZE && *strA[i] != '\0' && *strB[i] != '\0'; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			swap_word(&strA[i], &strB[i]);
		}
	}

	cout << "after" << endl;

	print_2darray(strA, STRINGSIZE);
	print_2darray(strB, STRINGSIZE);

	for (i = 0; i < STRINGSIZE; i++)
	{
		delete[] strA[i];
	}
	for (i = 0; i < STRINGSIZE; i++)
	{
		delete[] strB[i];
	}
	cout << endl;

	// 2

	return 0;
}