#include "main.h"

/**
 *_islower - function finds lower variable
 *@c: the argument
 *Return: 0 as usual
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
