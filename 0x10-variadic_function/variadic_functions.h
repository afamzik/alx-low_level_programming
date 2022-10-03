#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct  datatypeCheck - a struct
*@letter: letter that indicates data type
*@func: the function pointer
*/

typedef struct datatypeCheck
{
	char letter;
	void (*func)(va_list);
} checkDatatype;

#endif
