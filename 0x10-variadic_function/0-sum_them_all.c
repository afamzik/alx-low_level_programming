#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - return sum of a variable array
* @n: number of variable integer to add
* Return: returns sum
*/

int sum_them_ all(const unsigened int n, ...)
{
	va_list valist
	unsigned int sum = 0, x;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (x = 0; x < n; x++)
		sum = sum + va_arg(valist, int);
	va_end(valist);

	return(sum);
}
