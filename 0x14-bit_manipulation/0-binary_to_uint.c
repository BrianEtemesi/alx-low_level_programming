#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary
 * Return: converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i, k = 0;
	unsigned int sum = 0;
	int len = strlen(b);

	printf("lengh of binary is %d\n", len);

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			printf("b[%d] = %c\n", i, b[i]);
			if (b[i] == '1')
			{
				sum = sum + (2**k);
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

int main(void)
{
	printf("Binary 1111 = %d\n", binary_to_uint("1111"));

	return (0);
}
