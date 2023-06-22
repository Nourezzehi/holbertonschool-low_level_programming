#include "main.h"

/**
 * print_num_dig3 - print 3 dig numbers
 *
 *@n: the number print
 */
void print_num_dig3(int n)
{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
		_putchar((n % 10) + 48);
}
/**
 * print_num_dig2 - print 2 dig numbers
 *
 * @n: the number to print
 */
void print_num_dig2(int n)
{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
}

/**
 * print_to_98 - print to 98
 *
 * @n: the given number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	for (i = n; i < 98; i++)
	{
	if (i < 0)
	{
		_putchar('-');
		if (i > -10)
			_putchar(-i + '0');
		else if (i > -100)
		print_num_dig2(-i);
		else
		print_num_dig3(-i);
	}
		else
		{
			if (i < 10)
			_putchar(i + '0');
		else
			print_num_dig2(i);
		}
		_putchar(',');
		_putchar(' ');
	}}
	else
		{
			for (i = n; i > 98; i--)
			{
			if (i == 99)
			print_num_dig2(i);
			else
			print_num_dig3(i);
			_putchar(',');
			_putchar(' ');
	}}
	print_num_dig2(98);
	_putchar('\n');
	}
