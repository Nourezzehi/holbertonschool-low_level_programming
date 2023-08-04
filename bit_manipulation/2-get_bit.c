#include "main.h"

/**
 * get_bit - function that returns
 * the value of a bit at a given index
 * @n: input
 * @index: index to start at
 * Return: value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 8 * sizeof(n), shiftedValue;


	if (index > (size - 1))
		return (-1);
	shiftedValue = (int)(n >> index) & 1;
	return (shiftedValue);
}
