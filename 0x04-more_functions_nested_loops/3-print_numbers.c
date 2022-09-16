#include <stdio.h>
#include "main.h"

/**
*print_numbers - prints the numbers from 0 - 9
*
*Return: returns no value
*/

void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar (10);
}
