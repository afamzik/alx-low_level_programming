#include "main.h"
#include <stdio.h>

/**
* print_binary - convert unsigned int to binary
*@n: unsigned int
*Return: returns the binary digits
*/

void print_binary(unsigned long int n)
{
	unsigned long int dec = n, val = 1;
	int binlen = 0;

	while (dec > 0)
	{
		binlen++;
		dec >>= 1;
	}

	binlen = binlen - 1;

	if (binlen > 0)
		val = val << binlen;

	while (val > 0)
	{
		if (n & val)
			_putchar('1');
		else
			_putchar('0');

		val >>= 1;
	}
}
