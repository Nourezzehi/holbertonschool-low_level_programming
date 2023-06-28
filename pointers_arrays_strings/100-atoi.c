#include <limits.h>

/**
 * calcul_neg - calculates (-) in
 * a given string
 *
 * @ch: the given string
 *
 * Return: neg
 */

int calcul_neg(char *ch)
{
	int i = 0, neg = 0;

	while (*(ch + i) != '\0')
	{
		if (*(ch + i) == '-')
			neg++;
		i++;
	}
	return (neg);
}

/**
 * _strlen - claculates the length
 * of a string
 *
 * @ch: the string
 *
 *Return: len
 */

int _strlen(char *ch)
{
	int i = 0, len = 0;

	while (*(ch + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _atoi - converts a string
 * into an integer
 *
 * @s: the string
 *
 * Return: n
 */

int _atoi(char *s)
{
	int len = _strlen(s), i = len - 1, n = 0, j = 1, neg;

	neg = calcul_neg(s);
	if (neg % 2)
	{
		j = -1;
	}
	while (i >= 0)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		{
			n += (*(s + i) - '0') * j;
			if (j != 1000000000)
			j *= 10;
		}
		i--;
	}
	return (n);
}
