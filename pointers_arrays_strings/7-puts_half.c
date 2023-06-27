#include "main.h"

/**
 * _strlen - the length of a string
 *
 * @ch: the given string
 *
 * Return:len
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
 * puts_half - prints the second
 * half of the string
 *
 * @str: the given string
 */

void puts_half(char *str)
{
	int len = _strlen(str), half = len / 2, i = 0;

	while (i < half)
	{
		_putchar(*(str + len - half));
		len++;
		i++;
	}
	_putchar('\n');

}
