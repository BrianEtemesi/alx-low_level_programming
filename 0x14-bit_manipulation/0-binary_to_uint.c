#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary
 * Return: converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, k = 0, res;
	unsigned int sum;
	int len;

	if (!b)
		return (0);
	sum = 0;
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				j = k;
				res = 1;

				while (j)
				{
					res = res * 2;
					j--;
				}

				sum = sum + res;
			}
		}
		else
		{
			return (0);
		}

		k++;
	}

	return (sum);
}
