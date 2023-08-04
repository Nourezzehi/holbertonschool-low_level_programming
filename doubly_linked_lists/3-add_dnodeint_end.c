#include "lists.h"

/**
 * add_dnodeint_end - add a node at
 * the end of the list
 *
 * @head: head of the list
 *
 * @n: num to add
 *
 * Return: head of the list
*/

list add_dnodeint_end(list *head, const int n)
{
	list new = (list) malloc(sizeof(dlistint_t)), list_move = (*head);

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
	}
	else
	{
		while ((list_move)->next != NULL)
			list_move = list_move->next;
		list_move->next = new;
		new->prev = list_move;
	}
	return (*head);
}
