#include <stdio.h>
/**
 * main - prints all numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		putchar(char(i));
		i++;
	}
	return (0);
}
