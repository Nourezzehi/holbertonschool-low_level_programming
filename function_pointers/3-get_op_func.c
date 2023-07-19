/**
 * get_op_fun - returns a specific operation
 *@s: the operator
 * Return: a function
*/

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub} ,
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops + i)->op && (ops + i)->f)
	{
		if (!strcmp(s, (ops + i)->op))
			return ((ops + i)->f);
		i++;
	}
	return (NULL);
}
