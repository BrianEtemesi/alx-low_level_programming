#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings limited to n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: maximum bytes to include for string 2
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}

	if (j > n)
	{
		j = n;
	}

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		return (s);
	}

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		s[k + i] = s2[k];
	}

	s[i + j] = '\0';
	return (s);
}
