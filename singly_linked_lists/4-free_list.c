#include "lists.h"

/**
 * free_list - free the entire list
 *
 * @head: head of the list
*/

void free_list(list_t *head)
{
	list_t *before_list;

	if (!head)
		return;
	while (head != NULL)
	{
		before_list = head;
		head = head->next;
		free(before_list->str);
		free(before_list);
	}
}
