#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct  dt - a struct
*@letter: letter that indicates data type
*@func: the function pointer
*/

typedef struct dt
{
	char letter;
	void (*func)(va_list);
} dt_alias;

#endif
