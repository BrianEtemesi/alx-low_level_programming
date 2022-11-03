#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to the number
 * @index: index of bit to be set
 * Return: 1 if successful, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;
	return (1);
}
