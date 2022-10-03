#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints out number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int t;

	for (i = 0; argv[i]; i++)
	{
	}

	t = ((i + argc) / 2) - 1;

	printf("%d\n", t);

	return (0);
}
