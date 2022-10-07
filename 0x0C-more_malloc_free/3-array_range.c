#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum element value
 * @max: maximum element value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}

	return (p);
}
