#include "lists.h"

/**
 * print_list - print all nodes of a list
 *
 * @h: a head of the list to print
 *
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *aux = h;

	while (aux != NULL)
	{
		if (aux->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", aux->len, aux->str);
		size++;
		aux = aux->next;
	}
	return (size);
}
