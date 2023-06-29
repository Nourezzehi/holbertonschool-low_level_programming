
/**
 * leet - crypto
 *
 * @ch: the string to crypt
 *
 * Return: ch
 */

char *leet(char *ch)
{
	int i = 0;
	char c;

	while(*(ch + i))
	{
		c = *(ch + i);
		if (c == 'a' || c == 'A')
			*(ch + i) = '4';
		else if (c == 'e' || c == 'E')
		       *(ch + i) = '3';
		else if (c == 'o' || c == 'O')
	 		*(ch + i) = '0';
		else if (c == 't' || c == 'T')
			*(ch + i) = '7';
		else if (c == 'l' || c == 'L')
			*(ch + i) = '1';
		i++;
	}
	return (ch);
}
