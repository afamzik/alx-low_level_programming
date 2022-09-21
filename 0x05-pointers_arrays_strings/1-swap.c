#include "main.h"

/**
*swap_int - swapstwo integers
*@a: first arg
*@b: second arg
*Return: returns no value
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
