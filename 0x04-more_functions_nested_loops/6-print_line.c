#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character '_' should be printed
 *    should print \n if n is less than or equal to zero
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

	}

	_putchar('\n');
}
