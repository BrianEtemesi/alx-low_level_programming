#include "main.h"

/**
 * prime - check for prime numbers
 * @n: number input
 * @f: iteration factor
 * Return: 1
 */

int prime(int f, int n)
{
	if (n < 2 || n % f == 0)
	{
		return (0);
	}
	else if (f > n / 2)
	{
		return (1);
	}
	else
	{
		return (prime(f + 1, n));
	}
}

/**
 * is_prime_number - states if input is a prime number
 * @n: number input
 *
 * Return: 1 if number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}
