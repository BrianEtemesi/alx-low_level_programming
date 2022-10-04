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

	pstr = malloc(sizeof(str));

	if (pstr == NULL || str == NULL)
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
