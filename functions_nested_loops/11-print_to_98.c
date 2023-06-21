#include "main.h"

/**
 * print_to_98 - print to a given number
 *
 *@n: the number to start counting from
 */

void print_num_dig3(int n)
{
	if (n < 0)
	{
		_putchar(((-n) / 100) + 48);
		_putchar((((-n) % 100) / 10) + 48);
		_putchar(((-n) % 10) + 48);
	}
	else
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
		_putchar((n % 10) + 48);
	}
}

void print_num_dig2(int n)
{
	if (n < 0)
	{
		_putchar(((-n) / 10) + 48);
		_putchar(((-n) % 10) + 48);
	}
	else
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}

void num_smaller_than_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		if (i < 0)
		{
			_putchar('-');
                        if (i > (-10))
				_putchar(-i + 48);
                        else if (i > (-100))
				print_num_dig2(i);
			else
			{
				print_num_dig3(i);
			}
				_putchar(',');
				_putchar(' ');
		}
		else
		{
			if (i < 10 && i >= 0)
				_putchar(i + 48);
			else
			print_num_dig2(i);
			_putchar(',');
			_putchar(' ');
		}
		}}

void num_greater_than_98(int n)
{
	int i;

	for (i = n; i > 98; i--)
	{
		if (i == 99)
                       	print_num_dig2(i);
                else
		{
			print_num_dig3(i);
		}
			_putchar(',');
			_putchar(' ');
	}
}

void print_to_98(int n)
{	if (n < 98)
		num_smaller_than_98(n);
	else
		num_greater_than_98(n);
	_putchar(9 + 48);
	_putchar(8 + 48);
	_putchar('\n');
}
