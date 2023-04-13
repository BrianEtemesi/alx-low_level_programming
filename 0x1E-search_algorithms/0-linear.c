#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for value in an array of integers
 *
 * @array: pointer to given array(first element of array)
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: index of value if found, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* check if array is NULL */
	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
