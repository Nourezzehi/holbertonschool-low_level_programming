#include <stdio.h>

/**
 * main - print combinations
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('0' + i);
		putchar('0' + j - 1);
		putchar('\n');
	return (0);
}
