
/**
 * _strlen - calculates length of
 * a given string
 *
 * @ch: given string
 *
 * Return: len
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
 * _strncpy - copy n characters
 *
 * @dest: destination
 *
 * @src: copy source
 *
 * @n: number of characters
 *
 * Return: copied to
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = _strlen(dest);

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;	
	}
	if (i >= len)
		*(dest + i) = '\0';
	return (dest);
}
