#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: number input
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				k = j * i;
				_putchar(44);
				_putchar(32);
				if (k <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(k + 48);
				}
				else if (k <= 99)
				{
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar(((k / 100) % 10) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
