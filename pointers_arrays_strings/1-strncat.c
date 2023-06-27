
/**
 * _strncat - concatenates two strings
 * depending on n
 *
 * @dest: first string
 *
 * @src: second one
 *
 * @n: the n
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
