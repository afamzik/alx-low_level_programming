#include <stdio.h>

/**
 *main - print lowercase and uppercase using putchar
 *Return: Always 0 (success)
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	putchar('\n');

	return (0);
}
