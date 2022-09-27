#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to be taken by src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
