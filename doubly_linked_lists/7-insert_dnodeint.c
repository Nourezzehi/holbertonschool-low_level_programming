#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a
 * list at a given position
 * @h: head of the list
 *
 * @idx: The position to insert the new node
 *
 * @n: The integer to insert
 *
 * Return: the new list
 */

list insert_dnodeint_at_index(list *h, unsigned int idx, int n)
{
	list list_move = *h, new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		list_move = list_move->next;
		if (list_move == NULL)
			return (NULL);
	}

	if (list_move->next == NULL)
		return (add_dnodeint_end(h, n));

	new = (list) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = list_move;
	new->next = list_move->next;
	(list_move->next)->prev = new;
	list_move->next = new;
	return (new);
}
