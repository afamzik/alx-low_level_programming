#include "main.h"

/**
 *print_alphabet_x10 - this prints an aphabet 10 times
 *
 *return: 0 as usual
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 1;

	while ( y <= 10 )
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}

