#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - perform a given operation
 *
 * @argc: argument counts
 *
 * @argv: vector of arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	char *c;
	int result;
	int (*f)(int, int) = get_op_func(*(argv + 2));

	c = malloc((sizeof(char) + 1) * strlen(*(argv + 2)));
	strcpy(c, *(argv + 2));
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (strcmp(c, "+") && strcmp(c, "-")  && strcmp(c, "%") && strcmp(c, "/") && strcmp(c, "*") )
	{
		puts("Error");
		exit(99);
	}
	if ((!strcmp(c, "%") || !strcmp(c, "/")) && *(argv + 3) == 0)
	{
			puts("Error");
			exit(100);
	}
	result = f(atoi(*(argv + 1)), atoi(*(argv + 3)));
	printf("%d\n", result);
	return (0);
}