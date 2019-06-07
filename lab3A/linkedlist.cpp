#include <iostream>

#include "lab3.hpp"

using namespace std;

void print_list(node_t *_head)
{
    while (_head != NULL)
    {
        cout << _head->data << " ";
        _head = _head->next;
    }
    cout << endl;
}

// добавить в начало списка
void append_node(node_t **_head, int new_data)
{
    node_t *new_node = new node_t;

    new_node->data = new_data;
    new_node->next = *_head;

    *_head = new_node;
}

// добавить в начало списка
void remove_node(node_t **_card, int index)
{
    node_t *temp = *_card;
    int counter;
    counter = 0;

    while (counter != index)
    {
        if (temp->next == NULL)
        {
            cout << "error: element with index " << index << " not exists" << endl;
            return;
        }

        temp = temp->next;
        counter++;
    }

    *_card = temp;

    if ((*_card)->next != NULL)
    {
        (*_card) = (*_card)->next;
    }
    else
    {
        (*_card) = NULL;
    }
}

// добавить в конец списка
// void append_node(node_t **_head, int new_data)
// {
//     node_t *new_node = new node_t;

//     new_node->data = new_data;
//     new_node->next = NULL;

//     if (*_head == NULL)
//     {
//         *_head = new_node;
//         return;
//     }
//     else
//     {
//         while (*_head->next != NULL)
//             *_head = _head->next;

//         *_head->next = new_node;
//     }
// }

// void insert_node(node_t *_head, int new_data, int position)
// {
// }
