#include "main.h"

/**
 * print_chessboard - print a chessboard
 *
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	char c;
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = (*(*(a + i) + j));
			if (i < 2 || i > 5)
			{
				if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
					_putchar(c);
				else
					_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
