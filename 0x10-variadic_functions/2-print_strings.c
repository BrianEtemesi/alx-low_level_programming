#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string separator
 * @n: number of string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("(nil)");

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
			else
			{
				;
			}
		}
		else
		{
			printf("%s", str);

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
			else
			{
				;
			}
		}
	}

	printf("\n");
	va_end(ap);
}
