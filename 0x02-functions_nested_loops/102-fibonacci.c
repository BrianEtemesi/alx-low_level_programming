#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int i, j, k, n;


	i = 1;
	j = 2;

	printf("%ld, %ld, ", i, j);

	for (n = 0; n < 48; n++)
	{
		k = i + j;
		printf("%ld", k);
		if (n != 47)
			printf(", ");
		i = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
