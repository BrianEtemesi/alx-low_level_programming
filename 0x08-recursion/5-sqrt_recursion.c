#include "main.h"

/**
 * runthru - blank
 * @n: number input
 * @i: guess increment
 * Return: 1
 */

int runthru(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n > (i * i))
	{
		return (runthru(n, i + 1));
	}
	else
	{
		return (-1);
	}
}


/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number input
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (runthru(n, 1));
	}
}
