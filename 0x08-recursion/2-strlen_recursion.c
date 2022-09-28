#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: sting input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
