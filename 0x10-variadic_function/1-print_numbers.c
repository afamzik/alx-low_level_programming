#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers of variable length
* @separator: delimiter
* @n: amount of variable arg list
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	if (n > 0)
	{
		va_start(valist, n);
		for (x = 1; x <= n; x++)
		{
			printf("%d", va_arg(valist, int));
			if (x != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
