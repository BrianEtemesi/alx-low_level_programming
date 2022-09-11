#include <stdio.h>

/**
 * main - prints all combinations of 2 digits
 *
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int n1;
	int n2;

	while (c <= 99)
	{
		n1 = (c / 10 + '0');
		n2 = (c % 10 + '0');

		if (n1 < n2)
		{
			putchar(n1);
			putchar(n2);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
