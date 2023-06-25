#include "main.h"

/**
 * print_2 - prints 2 digits numbers
 *
 * @n: given number
 */

void print_2(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * print_3 - print 3 digits numbers
 *
 * @n: given number
 */

void print_3(int n)
{
	_putchar(n / 100 + '0');
	_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * print_4 - print 4 digits numbers
 *
 * @n: given number
 */

void print_4(int n)
{
	_putchar(n / 1000 + '0');
	_putchar((n % 1000) / 100 + '0');
	_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * print_number - print a given
 * number
 *
 * @n: the given number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n > -10)
			_putchar(-n + '0');
		else if (n > -100)
			print_2(-n);
		else if (n > -1000)
			print_3(-n);
		else
			print_4(-n);
	}
	else
	{
		if (n < 10)
			_putchar(n + '0');
		else if (n < 100)
			print_2(n);
		else if (n < 1000)
			print_3(n);
		else
			print_4(n);
	}
}
