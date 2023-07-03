#include <stdio.h>

/**
 * main - print all arguments
 *
 * @argc: count of args
 *
 * @argv: vector of args
 *
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
