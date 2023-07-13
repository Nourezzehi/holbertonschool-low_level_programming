#include <stdio.h>

/**
 * print_array - print elements of an array
 *
 * @a: the given array
 *
 * @n: number of the array's elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
