#include "main.h"

/**
 * print_last_digit - prints the last digit of a
 * given number
 *
 * @n: the given number
 *
 * Return: 0
 */
int print_last_digit(long n)
{
	if (n < 0)
		n *= -1;
	_putchar(48 + (n % 10));
	return (n % 10);
}
