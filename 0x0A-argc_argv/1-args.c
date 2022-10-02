#include <stdio.h>

/**
* main - the main fuction that prints the number
*@x: the number of numbers passed
*@argv: pointer to the array of numbers
* Return: returns 0 on success
*/

int main(int x, int argv[] __attribute__((unused)))
{
	if (x > 0)
		printf("%d\n", x - 1);

	return (0);
}
