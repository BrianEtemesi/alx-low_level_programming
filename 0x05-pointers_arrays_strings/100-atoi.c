#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, res = 0;

	for (i = 0; s[i]; ++i)
	{
		res = res * 10 + s[i] - '0';
	}

	return (res);
}
