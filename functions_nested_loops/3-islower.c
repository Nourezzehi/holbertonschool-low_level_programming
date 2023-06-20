#include "main.h"

/**
 * _islower - checks if a given
 * character c is lowercase
 * @c: an iteger
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
