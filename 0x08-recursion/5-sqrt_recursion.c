#include "main.h"

/**
* d_root - this function finds the root of a number
*@n: the number whose root is to be found
*@root: the root of the number n
*Return: returns the root
*/

int d_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (d_root(n, root + 1));
}
/**
* _sqrt_recursion - this function returns the natural square root of a number
*@n: the integer
*Return: the return value is a natural square
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (d_root(n, 0));
}
