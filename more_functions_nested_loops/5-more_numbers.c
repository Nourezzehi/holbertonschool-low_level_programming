#include "main.h"

/**
 * more_numbers - print all num
 * 14 times
 *
 */

void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j < 15)
		{
			if (j / 10 != 0)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		j++;
		}
		j = 0;
		_putchar('\n');
	}
}
