#include <stdio.h>
#include "main.h"
/**
 * main - prints "_putchar"
 *
 * Return: 0
 */


int main(void)
{
	int i;
	char ch [25] = "_putchar";

for (i = 0; ch[i] != '\0'; i++)
{
	putchar(ch[i]);
}
	putchar('\n');
	return (0);
}
