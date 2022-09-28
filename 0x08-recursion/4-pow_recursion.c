#include "main.h"

/**
 * _pow_recursion - raise x to the power of y
 * @x: base number
 * @y: power of x
 * Return: result
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
