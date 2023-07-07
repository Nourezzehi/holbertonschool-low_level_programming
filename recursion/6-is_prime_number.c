#include <math.h>

/**
 * prime - finds if a given
 * number is prime or not
 *
 * @n: the given number
 *
 * @i: counter
 *
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (!(n % i))
		return (0);
	return (prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * or not
 *
 * @n: the number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
