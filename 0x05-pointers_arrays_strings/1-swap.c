#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
