#include "main.h"

/**
 * puts_half - prints out the second half of a string
 *	If the number of characters is odd, the function should
 *	print the last n characters of the string,
 *	where n = (length_of_the_string - 1) / 2
 * @str: string to be considered
 *
 */

void puts_half(char *str)
{
	int i;
	int sp; /* starting point for the second half*/
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 == 0)
	{
		sp = i / 2;

		for (j = sp; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		i = i - 1;

		sp = (i / 2) + 1;

		for (j = sp; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
