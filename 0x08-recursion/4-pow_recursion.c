#include "main.h"

/**
* _pow_recursion - function returns the value of x raised to the power of y
*@x: the base integer
*@y: the exponent
*Return: the value is returned is the answer to the power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1 || y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
