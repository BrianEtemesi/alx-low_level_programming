#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k, n;

	i = 1;
	j = 2;

	printf("%d, %d, ", i, j);

	for (n = 0; n < 48; n++)
	{
		k = i + j;
		printf("%d, ", k);
		i = j;
		j = k;
	}
	putchar('\n');
	return (0);
}
