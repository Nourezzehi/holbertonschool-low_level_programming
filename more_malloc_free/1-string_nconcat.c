#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - n first bytes of s2
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes to extract from s2
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
	{
		if (strcmp(s1, ""))
		{
			s = (char *) malloc(sizeof(char) * (strlen(s1) + 1));
			if (s != NULL)
				strcpy(s, s1);
		}
		else
		{
			s = (char *) malloc(sizeof(char) * (strlen(s2) + 1));
			if (s != NULL)
				strcpy(s, s2);
		}
	}
	else
	{
		s = (char *) malloc(sizeof(char) * (strlen(s1) + n + 1));
		if (s != NULL)
		{
			strcpy(s, s1);
			strncat(s, s2, n);
		}
	}
	return (s);
}
