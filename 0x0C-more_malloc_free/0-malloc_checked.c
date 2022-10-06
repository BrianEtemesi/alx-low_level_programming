#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc function
 * @b: memory size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
