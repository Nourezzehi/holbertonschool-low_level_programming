#include <stdio.h>

/**
 * main - print the progarm name
 *
 * @argc: arg counts
 *
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
