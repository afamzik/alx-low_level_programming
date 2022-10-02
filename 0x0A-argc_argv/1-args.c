#include <stdio.h>

/**
* main - the main fuction that prints the number
*@argc: the number of numbers passed
*@argv: pointer to the array of numbers
* Return: returns 0 on success
*/

int main(int argc, int *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
