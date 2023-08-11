#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @hash_table: the hash table.
 */

void hash_table_delete(hash_table_t *hash_table)
{
	hash_table_t *h = hash_table;
	hash_node_t *node, *buffer;
	unsigned long int i;

	for (i = 0; i < hash_table->size; i++)
	{
		if (hash_table->array[i] != NULL)
		{
			node = hash_table->array[i];
			while (node != NULL)
			{
				buffer = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = buffer;
			}
		}
	}
	free(h->array);
	free(h);
}
