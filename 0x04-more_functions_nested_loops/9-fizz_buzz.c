#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 *  prints 'Fizz' for multiples of 3, 'Buzz' for multiples of 5
 *  and 'FizzBuzz' for multiples of both 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
			putchar(' ');
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
