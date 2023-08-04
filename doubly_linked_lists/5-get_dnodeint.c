#include "lists.h"

/**
 * get_dnodeint_at_index - get the required node
 *
 * @head: head of the list
 *
 * @index: the position of the reqquired node
 *
 * Return: the required node
*/

list get_dnodeint_at_index(list head, unsigned int index)
{
	unsigned int i = 0;
	list list_move = head;

	while (i < index && list_move != NULL)
	{
		i++;
		list_move = list_move->next;
	}
	return (list_move);
}
