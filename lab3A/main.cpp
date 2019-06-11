#include <iostream>

#include "lab3.hpp"

using namespace std;

int main()
{
	node_t *_head = NULL;

	int index,
		choice,
		number;

	cout << "welcome" << endl;

	while (choice != 6)
	{
		cout << "1: add node to list" << endl;
		cout << "2: remove node from list" << endl;
		cout << "3: remove list" << endl;
		cout << "4: print list" << endl;
		cout << "5: swap min and max nodes" << endl;
		cout << "6: exit" << endl;

		cout << "enter: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "number: ";
			cin >> number;
			_head = prepend_node(_head, number);
			cout << endl;
			break;
		case 2:
			cout << "index: ";
			cin >> index;
			remove_node(&_head, 1);
			cout << endl;
			break;
		case 3:
			remove_list(&_head);
			cout << "the list was successfully deleted.\n"
				 << endl;
			break;
		case 4:
			cout << "list: ";
			print_list(_head);
			cout << endl;
			break;
		case 5:
			swap_nodes(_head);
			cout << endl;
			break;
		case 6:
			swap_nodes(_head);
			cout << "goodbye!!!";
			break;
		default:
			cout << "error: please enter again." << endl;
			break;
		}
	}

	return 0;
}