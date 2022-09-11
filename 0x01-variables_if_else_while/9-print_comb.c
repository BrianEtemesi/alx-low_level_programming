#include <stdio.h>

/**
 * main - prints numbers 1 to 9 all separated by a comma and space
 *
 * Return: 0
 */

int main(void)
{
	long i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
