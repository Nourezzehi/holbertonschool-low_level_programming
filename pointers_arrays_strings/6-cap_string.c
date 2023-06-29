
/**
 * cap_string - capitalizes a
 * given string
 *
 * @ch: the string to capitalize
 *
 * Return: ch
 */

char *cap_string(char *ch)
{
	int i = 0;
	char c;

	while (*(ch + i) != '\0')
	{
		if (i != 0)
		{
		c = *(ch + i);
		if (c == '.' || c == ',' || c == ';' || c == '!' || c == '}'
		|| c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == ' ')
		{
			if ((*ch + i + 1) >= 'a' && *(ch + i + 1) <= 'z')
			{
				*(ch + i + 1) -= 32;
				i++;
			}
		}
		}
		i++;
	}
	return (ch);
}
