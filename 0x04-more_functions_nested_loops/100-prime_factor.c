#include <stdio.h>

/**
*main - main function
*Return: it returns 0
*/

int main(void)
{
	unsigned long x = 612852475143;
	unsigned long div = 2;

	while (div < x)
	{
		if (x % div == 0)
		{
			x = x / div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", x);
	return (0);
}
