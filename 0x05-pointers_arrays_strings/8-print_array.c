#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array to be considered
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;
	int nul = 0;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf(" \n");
	}
}
