#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: delimiter
* @n: number of args
* Return: returns no value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *str;

	if (n  > 0)
	{
		va_start(valist, n);
		for (x = 1; x <= n; x++)
		{
			str = va_arg(valist, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (x != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
