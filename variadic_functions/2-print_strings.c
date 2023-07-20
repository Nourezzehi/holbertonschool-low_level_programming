#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - print given strings
 * seperated by a given seperator
 *
 * @seperator: seperate words
 *
 * @n: number of words
*/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		s != NULL ? printf("%s", s) : printf("(nil)");
		if (seperator != NULL && i != n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
}
