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
	unsigned int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < sizeof(s2))
	{
		s = malloc(sizeof(s1) + n);
		if (s == NULL)
			return (s);
		for (i = 0; s1[i]; i++)
		{
			s[k] = s1[i];
			k++;
		}
		for (j = 0; j < n; j++)
		{
			s[k] = s2[j];
			k++;
		}
		s[k] = '\0';
		return (s);
	}
	s = malloc((sizeof(s1) + sizeof(s2)) - 1);
	if (s == NULL)
		return (s);
	for (i = 0; s1[i]; i++)
	{
		s[k] = s1[i];
		k++;
	}
	for (j = 0; s2[j]; j++)
	{
		s[k] = s2[j];
		k++;
	}
	s[k] = '\0';
	return (s);
}
