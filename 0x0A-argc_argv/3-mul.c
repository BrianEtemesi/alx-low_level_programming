#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector- pointer to array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
