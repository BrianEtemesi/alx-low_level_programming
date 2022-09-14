#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: Integer to be converted
 *
 * Return: absolute integer
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
