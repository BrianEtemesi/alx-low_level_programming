#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	j = k = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (j)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (k)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				k = 0;
			}
			fn2 = (n11 + n22);
			fn = n1 + n2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && j == 1)
			j = 0;
	}
	putchar('\n');
	return (0);
}
