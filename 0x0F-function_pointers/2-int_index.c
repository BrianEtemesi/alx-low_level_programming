#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: given array
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 * Return: index of element if not 0, -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);

			if (cmp(array[i]) == 1)
			{
				return (i);
				exit(0);
			}
		}

	}

	return (-1);
}
