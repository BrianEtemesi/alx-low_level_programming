#include <stdio.h>
/**
 * main - Prints digits 0 to 9
 *
 * Return: 0
 */

int main(void)
{
	long i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
