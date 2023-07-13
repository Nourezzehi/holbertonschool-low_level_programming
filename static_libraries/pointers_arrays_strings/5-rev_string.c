/**
 * _strlen - calculates length
 *
 * @s: the given string
 *
 * Return: len
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * rev_string - reverse a string
 *
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i, len = _strlen(s);
	char c;

	for (i = 0; i < (len / 2) ; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = c;
	}
}
