#include <iostream>

#include "lab10.hpp"

using namespace std;

int main()
{

	char *strA[STRINGSIZE];
	char *strB[STRINGSIZE];

	int i;
	for (i = 0; i < STRINGSIZE; i++)
	{
		strA[i] = new char[WORDSIZE];
	}
	for (i = 0; i < STRINGSIZE; i++)
	{
		strB[i] = new char[WORDSIZE];
	}

	fill_array(strA);
	fill_array(strB);

	// strA[2] = "hello";

	// strB[0] = "hi";

	cout << strA[0] << endl;

	cout << strB[0] << endl;

	return 0;
}