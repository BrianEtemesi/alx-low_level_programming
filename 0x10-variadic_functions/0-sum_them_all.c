#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 * @n: fixed parameter
 *
 * Return: sum off all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
