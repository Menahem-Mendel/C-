#include <iostream>
#include <climits>

#include "lab3.hpp"

using namespace std;

// Реализовать алгоритм, который находит минимальный и максимальный элементы списка.
// Минимальный элемент переставляет в начало списка, максимальный - в конец списка.
// Количество элементов в списке не должна меняться.
void swap_nodes(node_t *_card)
{
    int min,
        max;

    node_t *min_card = new node_t;
    node_t *max_card = new node_t;

    min = INT_MAX;
    max = INT_MIN;

    while (_card != NULL)
    {
        if (_card->data < min)
        {
            min = _card->data;
            min_card = _card;
        }

        if (_card->data > max)
        {
            max = _card->data;
            max_card = _card;
        }

        _card = _card->next;
    }

    swap(min_card->data, max_card->data);
}

void print_list(node_t *_head)
{
    while (_head != NULL)
    {
        cout << _head->data << " ";
        _head = _head->next;
    }
    cout << endl;
}

node_t *prepend_node(node_t *_head, int new_data)
{
    if (_head != NULL)
    {
        node_t *new_node = new node_t;

        new_node->data = new_data;
        new_node->next = _head;

        _head = new_node;
    }
    else
    {
        _head = create_node(NULL, new_data);
    }

    return _head;
}

node_t *create_node(node_t *next, int data)
{
    node_t *new_node = new node_t;
    if (new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_node->data = data;
    new_node->next = next;

    return new_node;
}

void remove_node(node_t **_card, int index)
{
    node_t *temp = *_card,
           *prev;

    int counter;

    counter = 0;

    if (temp != NULL && counter == index)
    {
        *_card = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && counter != index)
    {
        prev = temp;
        temp = temp->next;
        counter++;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    delete temp;
}

void remove_list(node_t **_head)
{
    node_t *current = *_head,
           *next;

    while (current != NULL)
    {
        next = current->next;
        delete current;
        current = next;
    }

    *_head = NULL;
}

void swap(int *a, int *b)
{
    int temp = *a;
    a = b;
    *b = temp;
}
