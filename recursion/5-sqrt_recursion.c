
/**
 * _sqrt - finds the sqrt of a given number
 *
 * @n: the given number
 *
 * @i: the square
 *
 * Return: -1 or the square
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - finds the sqrt of n
 *
 * @n: the given number
 *
 * Return: the square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
