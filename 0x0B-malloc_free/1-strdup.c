#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to new string which is a duplicate
 *	of another string
 * @str: source string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *pstr;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}
	pstr = malloc(sizeof(char) * (i + 1));

	if (pstr == NULL)
	{
		pstr = NULL;
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			pstr[i] = str[i];
		}
	}

	return (pstr);
}
