#include <stdio.h>

/**
 *main - prints the alphabet
 *in lowercase
 *
 * Return: 0;
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
