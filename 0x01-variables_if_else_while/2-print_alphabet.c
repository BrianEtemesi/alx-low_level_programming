#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowercase using putchar function
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
	putchar('\n');
	return (0);
}
