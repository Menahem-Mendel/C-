#include <iostream>
#include <fstream>
#include "lab8.hpp"

using namespace std;

int main()
{
	int a[SPACE] = {0},
		b[SPACE] = {0},
		c[SPACE * 2] = {0},
		d[SPACE * 2] = {0};
	char file[50];

	cout << "\ncopy this path: lab8/inputA.txt" << endl;
	cin >> file;
	if (fileInArray(file, a) == 0)
	{

		cout << "+++++++++++++++++++++++++			a 			+++++++++++++++++++++++++" << endl;
		printArray(a, SPACE);

		copyodd(a, c);
		copyeven(a, d);
	}

	cout << "\ncopy this path: lab8/inputB.txt" << endl;
	cin >> file;
	if (fileInArray(file, b) == 0)
	{

		cout << "+++++++++++++++++++++++++			b 			+++++++++++++++++++++++++" << endl;
		printArray(b, SPACE);

		copyodd(b, c);
		copyeven(b, d);
	}

	cout << "+++++++++++++++++++++++++			c 			+++++++++++++++++++++++++" << endl;
	printArray(c, SPACE * 2);

	cout << "+++++++++++++++++++++++++			d 			+++++++++++++++++++++++++" << endl;
	printArray(d, SPACE * 2);

	return 0;
}
