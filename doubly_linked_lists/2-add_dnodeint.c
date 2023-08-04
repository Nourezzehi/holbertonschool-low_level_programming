#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning
 * of a list
 *
 * @head: head of the list
 *
 * @n: the num to add
 *
 * Return: head of the list
*/

list add_dnodeint(list *head, const int n)
{
	list new = (list) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	return (new);
}
