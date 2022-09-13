#include <stdio.h>

/**
 *main - the main printing function
 *Return: eturn 0 (success)
 */

int main(void)
{
	char lw = 'a';

	while (lw <= 'z')
	{
		if (lw != 'q' && lw != 'e')
		{
		putchar(lw);
		}
		lw++;
	}
	putchar('\n');

	return (0);
}

