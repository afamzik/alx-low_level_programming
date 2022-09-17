#include "main.h"

/**
*print_triangle - prints triandgle
*@size: size argument
*Return: returns no value
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= (size - x); y++)
			_putchar(' ');

		for (z = 1; z <=  x; z++)
			_putchar('#');

		_putchar('\n');
	}
}
