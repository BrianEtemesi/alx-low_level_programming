#include <stdlib.h>
#include <stdio.h>

/**
 * main - print minimum no of coins to make change
 *	denominations of change 25,10,5,2,1
 * @argc: argument count
 * @argv: argument vector- pointer to array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		coins += 1;
	}

	printf("%d\n", coins);
	return (0);
}
