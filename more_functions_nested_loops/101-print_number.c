#include "main.h"
#include <limits.h>

/**
 * print - print any number
 *
 * @n: the given num
 */

void print(int n)
{
	int i, k = 0, j = 1, f = n;

	while (f /= 10)
		k++;
	for (i = 0; i < k; i++)
		j *= 10;
	for (i = 0; i < k + 1; i++)
	{
		_putchar((n / j) + '0');
		n %= j;
		j /= 10;
	}
}
/**
 * print_number - print a given
 * number
 *
 * @n: the given number
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{	
		_putchar('-');
		print(-n / 10);
		_putchar(8 + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print(-n);
	}
	else
		print(n);
}
