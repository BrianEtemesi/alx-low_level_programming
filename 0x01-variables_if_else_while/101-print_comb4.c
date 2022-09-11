#include <stdio.h>

/**
 * main - prints all posible combinations of 3 digits
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int n1;
	int n2;
	int n3;

	while (c <= 999)
	{
		n1 = (c / 100 + '0');
		n2 = (c / 10 % 10 + '0');
		n3 = (c % 10 + '0');

		if ((n1 < n2) && (n2 < n3))
		{
			putchar(n1);
			putchar(n2);
			putchar(n3);

			if (c != 789)
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
