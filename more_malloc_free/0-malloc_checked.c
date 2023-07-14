#include <stdlib.h>

/**
 * malloc_checked - checks if memory is allocated
 *
 * @b: pointer to allocated memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
