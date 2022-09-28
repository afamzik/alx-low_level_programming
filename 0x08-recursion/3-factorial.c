#include "main.h"

/**
* factorial - the factorial function
*@n: the integer
*Return: returns the factorial result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
