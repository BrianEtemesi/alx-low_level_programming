#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array to be considered
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

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
