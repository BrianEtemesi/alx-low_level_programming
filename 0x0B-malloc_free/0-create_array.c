#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates and initializes an array of characters
 * @size: size of array
 * @c: input character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *pc;
	unsigned int i;


	pc = malloc(size * (sizeof(char)));
	if (pc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			pc[i] = c;
		}
	}

	return (pc);
}
