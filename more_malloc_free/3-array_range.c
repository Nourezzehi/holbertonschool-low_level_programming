#include <stdlib.h>

/**
 * array_range - array with values from
 * min to max
 *
 * @min: start point
 *
 * @max: end point
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p, *c, i = min;

	if (max < min)
		return (NULL);
	p = (int *) malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (c = p; c < p + max - min + 1; c++)
	{
		*c = i;
		i++;
	}
	return (p);
}
