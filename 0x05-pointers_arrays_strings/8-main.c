#include <stdio.h>

void print_array(int *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {
		-198, 298, 402, -1024, 98
	};

	print_array(array, 5);
	return (0);
}
