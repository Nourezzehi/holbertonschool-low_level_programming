#include "main.h"

/**
 * _strlen - get the length of
 * a string
 *
 * @ch: the string
 *
 * Return: len
 */

int _strlen(char *ch)
{
	int i = 0, len = 0;

	while (*(ch + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * print_rev - print a string
 * in reverse
 *
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int strlen = _strlen(s);

	strlen--;
	while (strlen >= 0)
	{
		_putchar(*(s + strlen));
		strlen--;
	}
	_putchar('\n');
}
