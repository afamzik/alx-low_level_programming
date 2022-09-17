#include "main.h"

/**
*print_number - the fuction that prints number
*@n: number argument to be printed
*/

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double x = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (x <= positive)
			x = x * 10;
		tens = x / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens = tens / 10;
		}
	}
}
