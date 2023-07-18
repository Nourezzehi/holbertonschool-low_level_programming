#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 *
 * @name: the given name to print
 *
 * @f: the function to realise that
*/

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
	f(name);
}
