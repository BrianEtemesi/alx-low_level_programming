#include <stdio.h>

/**
 * main - prints hexadecimal numbers in lowercase
 *
 * hexadecimal numbers include - 0123456789ABCDEF
 * Return: 0
 */

int main(void)
{
	long num;
	int alf;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
	}

	for (alf = 'a'; alf < 'g'; alf++)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
