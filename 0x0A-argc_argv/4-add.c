#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector- pointer to array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int zero;

	sum = 0;
	zero = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}

	if (argc < 2)
	{
		printf("%d\n", zero);
	}
	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
