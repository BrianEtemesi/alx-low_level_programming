#include "main.h"

/**
 * _pow - powers a base number by the second argument
 * @a: base number
 * @b: second argument
 * Return: a^b
 */

int _pow(int a, int b)
{
	int res = 1;

	while (b)
	{
		res = a * a;
		b--;
	}

	return (res);
}
