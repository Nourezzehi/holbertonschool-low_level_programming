#include "main.h"

/**
 * swap_int - swap the values of two
 * integers
 *
 * @a: first num
 *
 * @b: second num
 */

void swap_int(int *a, int *b)
{
	*(a) +=  *(b);
	*(b) = *(a) - *(b);
	*(a) -= *(b);
}
