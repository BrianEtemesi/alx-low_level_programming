#include "main.h"

/**
 * _strcpy - copies string pointed to by 'src' to
 *	buffer pointed to by 'dest'
 *
 * @src: string to be copied
 * @dest: where to paste/store the copied string
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
