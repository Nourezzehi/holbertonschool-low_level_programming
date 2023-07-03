#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of the given
 * two args
 *
 * @argc: count of arg
 *
 * @argv: vector of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
	puts("Error");
	return (1);
}
