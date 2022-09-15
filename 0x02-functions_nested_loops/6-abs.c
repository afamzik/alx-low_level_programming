#include "main.h"
#include <stdio.h>

/**
 *_abs - prints out the absolute value of a number
 *@x: the argument
 *Return: this returns 0 or the requied value
 */

int _abs(int x)
{
	if (x > 0 || x == 0)
	{
		return (x);
	}
	else
		return (x * -1);
}
