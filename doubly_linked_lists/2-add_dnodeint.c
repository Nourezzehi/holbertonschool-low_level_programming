#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning
 * of adlistint_t
 *
 * @head: head of thedlistint_t
 *
 * @n: the num to add
 *
 * Return: head of the dlistint_t
*/

list add_dnodeint(list *head, const int n)
{
	list new = (list) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
