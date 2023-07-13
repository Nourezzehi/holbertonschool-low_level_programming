#include "main.h"

/**
 * _isupper - checks for uppercase
 *
 * @n: given character
 *
 * Return: 1 or 0
 */

int _isupper(int n)
{
	if (n <= 'Z' && n >= 'A')
		return (1);
	else
		return (0);
}

