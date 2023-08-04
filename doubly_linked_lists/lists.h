#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
typedef dlistint_t *list;
size_t print_dlistint(const list);
size_t dlistint_len(const list);
list add_dnodeint(list *, const int);
list add_dnodeint_end(list *, const int);
void free_dlistint(list);
list get_dnodeint_at_index(list head, unsigned int index);
list insert_dnodeint_at_index(list *, unsigned int, int);
int sum_dlistint(list);
int delete_dnodeint_at_index(list *head, unsigned int index);

#endif
