#include <stdio.h>

/**
 * main - print all combinations with
 * 3 digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				}
				if (i == 7)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	return (0);
}
