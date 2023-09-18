
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: the number of elements in array
 * Return: value searched if it exists, otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
