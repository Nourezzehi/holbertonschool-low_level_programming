#include "main.h"

/**
 * print_to_98 - print to a given number
 *
 *@n: the number to start counting from
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
			if (i > (-10))
				_putchar(-i + 48);
			else
			{
				_putchar(((-i) / 10) + 48);
				_putchar(((-i) % 10) + 48);
			}
			_putchar(',');
			_putchar(' ');

		}
		else
		{
			if (i < 10 && i >= 0)
                        _putchar(i + 48);
			else
			{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			}
			_putchar(',');
			_putchar(' ');
			}
		}
		}
		else if (n > 98)
		{
		for (i = n; i > 98; i--)
		{
			if (i == 99)
			{
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
			}
		else 
		{
		_putchar((i / 100) + 48);
		_putchar(((i % 100) / 10) + 48);
		_putchar((i % 10) + 48);
		}
		_putchar(',');
		_putchar(' ');
		}}
		_putchar(9 + 48);
		_putchar(8 + 48);
		_putchar('\n');
	}
