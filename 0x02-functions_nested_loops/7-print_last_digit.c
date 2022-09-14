#include "main.h"

/**
 * print_last_digit - prints the last digit any given number
 * @x: any given number
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	int modx = x % 10;
	int lx = (modx * ((modx > 0) - (modx < 0)));

	_putchar(lx % 10 + '0');
	return (lx);

}
