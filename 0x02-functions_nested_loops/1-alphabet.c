#include "main.h"
/**
 *print_alphabet - this function prints alphabets
 *
 *Returns: 0 as usual
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
