#include <stdlib.h>

/**
 * _calloc - allocate and sets allocated
 * memory to 0
 *
 * @nmemb: number of elements
 *
 * @size: size of one element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (c = p; c < (char *)p + (size * nmemb); c++)
		(*c) = 0;
	return (p);
}
