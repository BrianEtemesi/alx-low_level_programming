#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	len = len - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
