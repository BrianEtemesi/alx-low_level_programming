#include "main.h"

/**
 * _isalpha - check if charater in alphabet
 * @c: character to be checked
 *
 * Return: 1
 */

int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
