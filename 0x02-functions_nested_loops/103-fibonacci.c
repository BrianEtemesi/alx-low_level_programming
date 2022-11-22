#include <stdio.h>

/**
 * main - prints sum of even fibonacci values before 4,000,000
 * Return: 0
 */

int main(void)
{
	long int i, j, k, sum;

	i = 1;
	j = 2;
	k = 0;
	sum = 2;

	while (k <= 100)
	{
		if (k % 2 == 0)
		{
			sum = sum + k;
		}
		k = i + j;
		i = j;
		j = k;
	}

	printf("%ld\n", sum);

	return (0);
}
