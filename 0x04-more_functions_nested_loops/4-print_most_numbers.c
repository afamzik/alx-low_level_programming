#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - the function
*
*Return: returns no value
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 48; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
}
