#include <stdlib.h>

/**
 * malloc_cheched - checks if memory is allocated
 *
 * @b: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if( p == NULL)
		exit(98);
	return (p);
}
