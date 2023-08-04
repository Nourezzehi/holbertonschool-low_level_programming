#include "lists.h"

/**
 * list_len - length of a given list
 *
 * @h: the head of the list
 *
 * Return: length of the list
*/

size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *aux = h;

	while (aux != NULL)
	{
		size++;
		aux = aux->next;
	}
	return (size);
}
