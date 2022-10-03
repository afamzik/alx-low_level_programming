#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_char - prints char value
*@valist: valist
*/

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}


/**
*print_int - prints int value
*@valist: valist
*/

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}


/**
*print_float - prints float values
*@valist: valist
*/

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}


/**
*print_string - prints the string argument
*@valist: valist
*/

void print_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
*print_all - prints all argument passed
*@format: an array of characters of different types
*/

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list valist;

	checkDatatype input[] = { {'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string},
				{'\0', NULL} };

	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (input[i].letter != '\0')
		{
			if (input[i].letter == format[j])
			{
				printf("%s", separator);
				input[i].func(valist);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
