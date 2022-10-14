#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipleis two integers
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of 'a' divided by 'b'
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}

/**
 * op_mod - gets remainder after division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a % b);
}
