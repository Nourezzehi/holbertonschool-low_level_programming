/*
 * FILE : 6-size.c
 */

#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on.
 *
 * return : ALways 0 .
 */

int main(void)
{
	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long));
	printf("Size of a float: %d\n", sizeof(float));
	return (0);
}
