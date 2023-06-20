#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 */

void print_alphabet(void)
{
	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
