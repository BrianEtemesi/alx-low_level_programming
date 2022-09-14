#include <unistd.h>

/**
 * main - prints out c
 *
 * Return: 0
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

