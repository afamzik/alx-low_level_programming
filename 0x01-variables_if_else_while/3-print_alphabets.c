#include  <stdio.h>

/**
 *main - this prints the lowercase and uppercase of the alphabets
 *Return: returns 0 (success)
 */

int main(void)
{
	char low = 'a';
	char up = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	putchar('\n');

	return (0);
}
