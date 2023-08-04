#include "lists.h"

/**
 * free_dlistint - free a list
 *
 * @head: head of the list
*/

void free_dlistint(list head)
{
	list list_move = head;

	while (list_move != NULL)
	{
		free(list_move);
		list_move = list_move->next;
	}
}
