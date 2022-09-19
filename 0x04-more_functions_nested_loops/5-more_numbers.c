#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 *
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char j, k, p;

		p = '1';

		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}

		for (k = '0'; k <= '4'; k++)
		{
			_putchar(p);
			_putchar(k);
		}
		_putchar('\n');
	}
}
