#include "lists.h"

/**
* add_node_end - add a node at the
* beginnig of the list
*
* @head: **head pf the list
*
* @str: the string in the added node
*
* Return: new **head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *aux = *head;

	if (!str)
		return (NULL);
	add = (list_t *) malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	if (!(add->str))
	{
		free(add);
		return (NULL);
	}
	add->len = strlen(str);
	add->next = NULL;
	if (!(*head))
		*head = add;
	else
	{
		while ((aux->next) != NULL)
			aux = aux->next;
		aux->next = add;
	}
	return (*head);
}
