#include <unistd.h>
#include "main.h"

/**
 * _abs - print the absolute value of an integer
 *
 * @n: the given number
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
