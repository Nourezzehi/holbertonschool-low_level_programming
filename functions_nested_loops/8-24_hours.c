#include "main.h"

/**
 * jack_bauer - prints every
 * minute of the day
 */

void jack_bauer(void)
{
	int i, j, k, f;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for(k = 0; k <= 9; k++)
			{
				for(f = 0; f <= 9; f++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(f);
					_putchar('\n');
				}
			}
		}
	}
}
