#include <iostream>

#include "lab2.hpp"

using namespace std;

int main()
{
	int index;
	int choice;
	double number;
	char input;

	cout << "welcome" << endl;

	while (choice != 7)
	{
		cout << "1: add element" << endl;
		cout << "2: remove element" << endl;
		cout << "3: print" << endl;
		cout << "4: clear" << endl;
		cout << "5: last element index" << endl;
		cout << "6: polish calculator" << endl;
		cout << "7: exit" << endl;

		cout << "enter: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "number: ";
			cin >> number;
			push(number);
			break;
		case 2:
			top();
			cout << endl;
			break;
		case 3:
			print_stack();
			cout << endl;
			break;
		case 4:
			clear_stack();
			cout << endl;
			break;
		case 5:
			top_index();
			cout << endl;
			break;
		case 6:
			cout << "input: ";
			input = ' ';
			while (input != '=')
			{
				cin >> input;
				calculator(input);
				if (input != EOF)
					return 0;
			}
			cout << endl;
			break;
		case 7:
			cout << "goodbye!" << endl;
			break;
		default:
			cout << "error:" << endl;
			return 0;
			break;
		}
	}

	return 0;
}