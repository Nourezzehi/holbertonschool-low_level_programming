#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two
 * given strings
 *
 * @s1: first one
 *
 * @s2: second one
 *
 * Return: ch
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;

	ch = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ch != NULL)
	{
		if (s1 == NULL)
			strcpy(s1, "");
		strcpy(ch, s1);
		strcat(ch, s2);
	}
	return (ch);
}
