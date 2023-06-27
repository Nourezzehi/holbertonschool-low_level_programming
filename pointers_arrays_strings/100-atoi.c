/*#include <stdio.h>*/

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
	int len = _strlen(s), i = len - 1, n = 0, j = 1, ok = 1;

	while (i >= 0 && ok)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		{
		n += (*(s + i) - '0') * j;
		/*printf("| %d |", n);*/
		j *= 10;
		if (*(s + i - 1) < '0' || *(s + i - 1) > '9')
		{
			if (*(s + i - 1) == '-')
				n *= -1;
			ok = 0;
		}}
		i--;
	}
	return (n);
}
