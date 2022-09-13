#include <stdio.h>
#include "main.h"

/**
 * main - prints out _putchar followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
