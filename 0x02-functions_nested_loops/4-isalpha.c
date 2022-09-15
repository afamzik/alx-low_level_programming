#include "main.h"

/**
 *_isalpha - checks if its an alphabet
 *@c: is the primary argument
 *Return: 0 as expected
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
