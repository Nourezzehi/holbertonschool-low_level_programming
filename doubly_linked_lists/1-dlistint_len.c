#include "lists.h"

/**
 * dlistint_len - length of a list
 *
 * @h: head of the list
 *
 * Return: lists length
*/

size_t dlistint_len(const list h)
{
	size_t size = 0;
	list list_move = h;

	while (list_move != NULL)
	{
		size++;
		list_move = list_move->next;
	}
	return (size);
}
