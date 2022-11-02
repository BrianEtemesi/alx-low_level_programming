#include <stdio.h>

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
		res = res * a;
		b--;
	}

	return (res);
}

int main(void)
{
	printf("5^0 = %d\n", _pow(5, 0));
	
	return (0);
}
