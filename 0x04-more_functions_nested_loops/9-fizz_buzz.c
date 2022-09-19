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
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
