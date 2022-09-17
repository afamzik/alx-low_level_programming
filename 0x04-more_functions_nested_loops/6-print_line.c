#include <stdio.h>
#include "main.h"

/**
*print_line - striaght line function
*@n: the argument
*Return: does not return anything
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
