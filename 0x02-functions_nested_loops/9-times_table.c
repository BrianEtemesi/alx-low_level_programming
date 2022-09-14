#include "main.h"

/**
 * times_table - prints the 9 time table
 *
 */

void times_table(void)
{
	int a, b, n;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			n = a * b;
			_putchar(44);
			_putchar(32);
			if (n <= 9)
			{
				_putchar(32);
				_putchar(n + 48);
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
