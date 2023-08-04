#include "lists.h"

/**
 * sum_dlistint - return sum of a list's all elements
 *
 * @head: header of the list
 *
 * Return: sum
*/

int sum_dlistint(list head)
{
	unsigned int sum = 0;
	list list_move = head;

	while (list_move != NULL)
	{
		sum += list_move->n;
		list_move = list_move->next;
	}
	return (sum);
}
