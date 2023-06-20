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
			for(k = 0; k <= 6; k++)
			{
				for(f = 0; f <= 9; f++)
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
