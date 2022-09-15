#include "main.h"
/**
 *print_last_digit - main function
 *@y: argument that holds the last digit
 *Return: returns the value required
 */

int print_last_digit(int y)
{
	int x = y % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');

	return (x);
}
