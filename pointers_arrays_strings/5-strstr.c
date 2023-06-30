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
	unsigned int i = 0;
	char *p = haystack, *s;

	if (*(needle) == '\0')
		return (haystack);
	while (*(p) != '\0')
	{	
		if (*(needle) == *(p))
		{
			s = p;
			while (*(needle + i) != '\0' && *(s) == *(needle + i))
			{					
				s++;
				i++;
				}
				if (*(needle + i) == '\0')
					return (p);
			}
			p++;
		}
	return (NULL);
}
