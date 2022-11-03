#include "main.h"

/**
 * set_bit - sets bit to 1 at given index
 * @n: pointer to the number in decimal
 * @index: index
 * Return: 1 if successful, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
