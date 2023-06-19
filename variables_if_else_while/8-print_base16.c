#include <stdio.h>
/**
 * main - all numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	char c, i;

	c = 'a';
	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
