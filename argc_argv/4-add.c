#include <stdio.h>
#include <stdlib.h>

/**
 * isadigit - cheks if a given string can
 * be converted into an integer
 *
 * @ch: the given string
 *
 * Return: ok
 */

int isadigit(char *ch)
{
	int ok = 1, i = 0;
	char c;

	while (*(ch + i) != '\0' && ok)
	{
		c = *(ch + i);
		if (!(c <= '9' && c >= '0'))
			ok = 0;
		i++;
	}
	return (ok);
}

/**
 * main - add two positive
 * numbers
 *
 * @argc: count of args
 *
 * @argv: vector of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, i = 1;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	while (i < argc)
	{
		if (!isadigit(*(argv + i)))
		{
			puts("Error");
			return (1);
		}
		num += atoi(argv[i]);
		i++;
	}
	printf("%d\n", num);
	return (0);
}
