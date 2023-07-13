#include "main.h"

/**
 * _isdigit - checks if the
 * chracter is upper
 *
 * @c: the given number
 *
 * Return: 1 or 0;
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
