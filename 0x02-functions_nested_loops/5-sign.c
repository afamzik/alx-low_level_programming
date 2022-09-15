#include "main.h"

/**
 *print_sign - fuction that tells  you the sign of a number
 *@n: the is the argument
 *Return: returns a value
 */

int print_sign(int n)
{
	if (n  > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	_putchar('0');
	return (0);
}
