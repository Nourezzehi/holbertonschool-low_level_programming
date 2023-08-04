#include "lists.h"

/**
 * add_node - add a node at the
 * beginnig of the list
 *
 * @head: head pf the list
 *
 * @str: the string in the added node
 *
 * Return: new head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	if (!str)
		return (*head);
	add = (list_t *) malloc(sizeof(list_t));
	if (!add)
		return (*head);
	add->str = strdup(str);
	add->next = (*head);
	add->len = strlen(str);
	*(head) = add;
	return (add);
}
