#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name input
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
