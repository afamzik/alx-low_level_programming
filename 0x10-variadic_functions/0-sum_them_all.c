#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - return sum of a variable array
* @n: number of variable integer to add
* Return: returns sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int sum = 0;

	if (n =< 0)
		return (0);

	/*list valdation*/
	va_start(valist, n);

	/*loops throug list*/
	for (x = 0; x < n; x++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
