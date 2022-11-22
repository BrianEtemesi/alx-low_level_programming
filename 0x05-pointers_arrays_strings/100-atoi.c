#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, sig, brk, res = 0;
	sig = -1;
	brk = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res = res - (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
