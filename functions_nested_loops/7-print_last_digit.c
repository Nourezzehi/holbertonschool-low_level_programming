#include "main.h"

/*
 * print_last_digit - prints the last digit of a
 * given number
 *
 * @n: the given number
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

int print_last_digit(int n)
{
	n = _abs(n);
	_putchar(48 + (n % 10));
	return (n % 10);
}
