#include "main.h"

/**
 * jack_bauer - prints every
 * minute of the day
 */

void jack_bauer(void)
{
	int i, j, k, f, c = 9;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= c; j++)
		{
			if (i == 2)
				c = 3;
			for (k = 0; k <= 5; k++)
			{
				for (f = 0; f <= 9; f++)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(f + 48);
					_putchar('\n');
				}
			}
		}
	}
}
