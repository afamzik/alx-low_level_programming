#include <stdio.h>

/**
 *main - maun funtion
 *Return: returns 0
 */

int main(void)
{
	char lw = 'z';

	while (lw >= 'a')
	{
		putchar(lw);
		lw--;
	}

	putchar('\n');

	return (0);
}
