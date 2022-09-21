#include <stdio,h>
#include "main.h"

/**
*_puts - prints a string
*@str: string arg
*
*Description: prints a string of characters
*0n success: returns no err
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
