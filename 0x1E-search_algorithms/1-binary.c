#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: given array/pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value if found, -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	left = 0;
	right = size - 1;

	while (array && (left <= right))
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
	}

	return (-1);
}
