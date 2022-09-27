#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to which the other string will be appended
 * @src: string to be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	dest[i] = ' ';

	for (j = 0; src[j]; j++)
	{
		dest[i + 1] = src[j];
		i++;
	}

	return (dest);
}
