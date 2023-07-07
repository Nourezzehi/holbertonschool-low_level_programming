#include <stdio.h>
#include <stdlib.h>

/**
 * change - change into cents
 *
 * @t: array
 *
 * @cents: our result
 *
 * @c: coins
 *
 * Return: cents
 */e

int change(int *t, int cents, int c)
{
	if (!(*t) || !c)
		return (0);
	if (c >= *(t))
		return (change(t + 1, cents + (c / (*t)), c % *(t)));
	if (c <= *(t))
		return change((t + 1, cents, c));
}

/**
 * main - minimum coins to make
 * change for an amount of money
 *
 * @argc: count of argumentss
 *
 * @argv: vector of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t[] = {25, 10, 5, 2, 1}, cents;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (atoi(*(argv + 1)) < 0)
	{
		puts("0");
		return (0);
	}
	cents = (t, cents, *(argv + 1));
	return (0);
}
