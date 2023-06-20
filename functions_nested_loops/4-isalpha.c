#include "main.h"
#include <unistd.h>

/**
 * _isalpha - print alphabet low and
 * upp
 *
 * @c: the given character
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
