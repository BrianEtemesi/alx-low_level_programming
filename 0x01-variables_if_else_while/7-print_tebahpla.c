#include <stdio.h>

/**
 * main - prints alphabet in lowercase in reverse
 *
 * Return: 0
 */

int main(void)
{
	int alf;

	for (alf = 'z'; alf >= 'a'; alf--)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
