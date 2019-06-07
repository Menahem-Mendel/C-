#include <iostream>

#include "lab3.hpp"

using namespace std;

int main()
{
	node_t *_head = NULL;
	int index;

	index = 0;

	append_node(&_head, 6);
	append_node(&_head, 5);
	append_node(&_head, 4);
	append_node(&_head, 3);
	append_node(&_head, 2);
	append_node(&_head, 1);

	print_list(_head);

	remove_node(&_head, 5);

	print_list(_head);

	return 0;
}