#include <stdio.h>

/**
* create_array.c - create an array
*
* @size: size of the array
* @c: charcter

*Return: a string
*/

char *create_array(unsigned int size, char c)
{
    int i;
    
    if (!size)
        return (NULL);
    char *ch = (char)malloc(sizeof(char) * size);
    if (!ch)
    {
        for (i = 0; i < size; i++)
            *(ch + i) = c;
    }
    return (ch);
}