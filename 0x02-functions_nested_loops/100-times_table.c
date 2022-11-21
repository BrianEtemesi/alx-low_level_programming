#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: number input
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				printf("%3d", k);
				if (j != n)
					putchar(',');
			}
			putchar('\n');
		}
	}
}
