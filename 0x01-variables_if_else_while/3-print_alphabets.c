#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints alphabet in lowercase then uppercase using putchar function
 *
 * Return: 0
 */

int main(void)
{
	int alph;

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		int lowercase = tolower(alph);

		putchar(lowercase);
	}

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
