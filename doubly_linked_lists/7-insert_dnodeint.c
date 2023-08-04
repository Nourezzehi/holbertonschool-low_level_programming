#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a
 * list at a given position
 * @h: h of the list
 * @idx: The position to insert the new node
 * @n: The integer to insert
 * Return: the new list
 */
list insert_dnodeint_at_index(list *h, unsigned int idx, int n)
{
	unsigned int count;
	list tmp, new, tmp_prev;

	if (h == NULL && idx > 0)
	return (NULL);
	new = (list) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;
	if (idx == 0)
	{
		if (*h)
	{
		new->next = *h;
		(*h)->prev = new, *h = new;
	}
		else
			*h = new;
		return (new);
	}
	count = 1, tmp = (*h)->next;
	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		tmp_prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL && count == idx)
	{
		tmp_prev->next = new, new->prev = tmp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
