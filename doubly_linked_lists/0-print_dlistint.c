#include "lists.h"

/**
 * print_dlistint - print all elements of a double
 * linked list
 *
 * @h: head of the list
 *
 * Return: size of the list
*/

size_t print_dlistint(const list h)
{
	size_t size = 0;
	list list_move = h;

	while (list_move != NULL)
	{
		printf("%d\n", list_move->n);
		size++;
		list_move = list_move->next;
	}
	return (size);
}
