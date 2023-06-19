#include <stdio.h>
/**
 *main - prints all digits
 *
 * Return: 0
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
