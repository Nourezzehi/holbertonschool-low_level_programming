#include "main.h"

/**
 * _stoi - convert a char to a num
 * @c: the char to convert
 * Return: num
*/

unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
 * binary_to_uint - converts abinary
 * @b: the string of 0 and 1
 * Return: converted num
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (result);
}
