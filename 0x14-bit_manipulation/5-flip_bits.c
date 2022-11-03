#include "main.h"

/**
 * flip_bits - flips bits to get from one number to another
 * @n: first number
 * @m: final number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int count;

	res = n ^ m;

	for (count = 0; res > 0;)
	{
		if ((res & 1) == 1)
			count++;
		res = res >> 1;
	}

	return (count);
}
