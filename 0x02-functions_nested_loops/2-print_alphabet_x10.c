#include "main.h"

/**
 *print_alphabet_x10 - this prints an aphabet 10 times
 *
 *return: 0 as usual
 */

void print_alphabet_x10(void)
{
	char x, y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');

	}
}


