#include <stdio.h>

/**
 * prime - verifies if a given
 * number is prime or no
 *
 * @n: the given number
 *
 * Return: 1 if prime else 0
 */

int prime(long n)
{
	long i = 2, v = 1;

	while (v && i <= n / 2)
	{
		if (n % i == 0)
			v = 0;
		i++;
	}
	return (v);
}

/**
 * prime_factor - finds the prime factor
 * of the given number
 *
 * @n: the given number
 *
 * Return: the largest  prime factor
 */

long prime_factor(long n)
{
	long i = n / 2;
	int ok = 1;

	while (ok && i >= 2)
	{
		if (prime(i) && !(n % i))
			ok = 0;
		else
			i--;
	}
	return (i);
}

/**
 * main - prints the largest prime
 * factor of the given  number
 *
 * Return: the largest prime
 * factor of the given number
 */

int main(void)
{
	long n = 612852475143;

	printf("%ld\n", prime_factor(n));
	return (0);
}
