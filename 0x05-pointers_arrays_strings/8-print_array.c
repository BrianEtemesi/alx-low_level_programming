#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array to be considered
 * @n: number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
