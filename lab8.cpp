#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void fileInArray(char[], int[]);
void copyeven(int[], int[]);
void copyodd(int[], int[]);
void printArray(int[]);

#define SPACE 20

int main()
{
	int a[SPACE] = {0},
		b[SPACE] = {0},
		c[SPACE] = {0},
		d[SPACE] = {0};
	char file[50];

	cout << "inputA.txt" << endl;
	cin >> file;
	fileInArray(file, a);
	cout << "a" << endl;
	printArray(a);

	cout << "inputB.txt" << endl;
	cin >> file;
	fileInArray(file, b);
	cout << "b" << endl;
	printArray(b);
	cout << endl;

	copyodd(a, c);
	copyodd(b, c);

	copyeven(a, d);
	copyeven(b, d);

	cout << "c" << endl;
	printArray(c);

	cout << "d" << endl;
	printArray(d);
	cout << endl;

	return 0;
}

void copyodd(int from[], int to[])
{
	int i_from;
	int i_to;

	for (i_to = 0; to[i_to] != 0 && i_to < SPACE * 2; i_to++)
		;

	for (i_from = 0; i_from < SPACE && i_to < SPACE * 2; i_from++)
	{
		if (from[i_from] % 2 == 1)
		{
			to[i_to++] = from[i_from];
		}
	}
}

void copyeven(int from[], int to[])
{
	int i_from;
	int i_to;

	for (i_to = 0; to[i_to] != 0 && i_to < SPACE * 2; i_to++)
		;

	for (i_from = 0; i_from < SPACE && i_to < SPACE * 2; i_from++)
	{
		if (from[i_from] % 2 == 0)
		{
			to[i_to++] = from[i_from];
		}
	}
}

void fileInArray(char file[], int to[])
{
	int index_fia;
	ifstream input;

	input.open(file);

	if (input.is_open())
	{
		for (index_fia = 0; index_fia < SPACE && !input.eof(); index_fia++)
		{
			input >> to[index_fia];
		}
	}
	else
		cout << "error file not opened" << endl;

	input.close();
}

void printArray(int arr[])
{
	int index;

	for (index = 0; index < SPACE && arr[index] != 0; index++)
	{
		cout << "arr[" << index << "] = " << arr[index] << endl;
	}
}