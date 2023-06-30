#include <stddef.h>
/**
 * _strstr - finds and loctaes the substring
 * in the main string
 *
 * @haystack: the main string
 *
 * @needle: the substring
 *
 * Return: sub
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;
	char *p, *s;

	if (*(needle) == '\0')
		return (haystack);
	while (*(needle + i) != '\0')
	{
		p = haystack;
		while (*(p) != '\0')
		{	
			if (*(needle + i) == *(p))
			{
				j = i;
				s = p;
				while (*(s) != '\0' && *(s) == *(needle + j))
				{
					s++;
					j++;
				}
				if ((*s) == '\0')
					return (p);
			}
			p++;
		}
			i++;
	}
	return (NULL);
}
