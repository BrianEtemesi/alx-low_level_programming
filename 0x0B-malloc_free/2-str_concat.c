#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings and saves in new location
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new location
 */

char *str_concat(char *s1, char *s2)
{
	int j, i, k;
	char *ps;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	k = j + i + 1;
	ps = malloc(sizeof(char) * k);
	if (ps == NULL)
	{
		return (ps);
	}
	for (i = 0; s1[i]; i++)
	{
		ps[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		ps[i] = s2[j];
		i++;
	}
	ps[k] = '\0';
	return (ps);
}
