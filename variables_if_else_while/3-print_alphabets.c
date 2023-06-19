#include <stdio.h>

/**
 * main - prints alphabets in
 * lower case then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char c, k;

	c = 'a';
	k = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
