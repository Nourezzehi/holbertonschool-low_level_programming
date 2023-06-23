#include "main.h"

/**
 * print_triangle - print
 * a triangle
 *
 * @size: the size of the
 * triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = i; k < size - 1; k++)
			_putchar(' ');
		for (j = i + 1; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
