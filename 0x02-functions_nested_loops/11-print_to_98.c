#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from number given to 98
 * @n: given number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
