#include <stdlib.h>

/**
 * alloc_grid - allocate a matrix
 *
 * @width: matrix's width
 *
 * @height: matrix's height
 *
 * Return: m
 */

int **alloc_grid(int width, int height)
{
	int **m, i;

	if (height <= 0 || width <= 0)
		return (NULL);
	m = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < width; i++)
		*(m + i) = (int *) malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(m + i) + j) = 0;
	}
	return (m);
}
