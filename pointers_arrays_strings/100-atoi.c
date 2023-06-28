#include <limits.h>

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
	int len = _strlen(s), i = len - 1, n = 0, j = 1, neg = 0;

	while (i >= 0)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		{
			n += (*(s + i) - '0') * j;
			j *= 10;
			if (j > INT_MAX)
				return n;
		}
		if (*(s + i) == '-')
			neg++;
		i--;
	}
	if (neg % 2)
		return (-n);
	return (n);
}
