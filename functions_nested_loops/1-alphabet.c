#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
