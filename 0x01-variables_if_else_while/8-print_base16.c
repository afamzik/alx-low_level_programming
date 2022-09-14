#include <stdio.h>

/**
 *main - the main function
 *Return: returndss
 */

int main(void)
{
	int n = '0';
	char x = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
