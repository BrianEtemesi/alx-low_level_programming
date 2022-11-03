#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: decimal value
 * @index: index of bit in the binary value
 * Return: value of bit at index, -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int rem;
	unsigned int size;
	char *arr;
	int j, i = 0;

	size = get_size(n);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (-1);

	while (n && n != 0)
	{
		rem = n % 2;
		if (rem == 1)
		{
			arr[i] = '1';
		}
		else
		{
			arr[i] = '0';
		}
		n = n / 2;
		i++;
	}
	if (index >= size)
	{
		return (-1);
	}
	else
	{
		j = size - index - 1;
		if (arr[j] == '1')
			return (1);
		return (0);
	}

}

/**
 * get_size - gets the number of bits in the binary format
 * @n: decimal to be converted to binary
 * Return: number of bits
 */

int get_size(unsigned long int n)
{
	int i = 0;

	while (n != 0)
	{
		n = n / 2;
		i++;
	}

	return (i);
}

