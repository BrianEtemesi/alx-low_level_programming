#include <stdio.h>

/**
 * main - prints largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	long int i, j = 612852475143;

	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			j /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
