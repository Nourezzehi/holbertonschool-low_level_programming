#include "main.h"

/**
 * _strlen - prints the length of a given
 * string
 *
 * @s: the given string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
