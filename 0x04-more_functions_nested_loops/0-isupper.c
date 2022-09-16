#include "main.h"

/**
* _isupper - checks if a character is uppercase or otherwise
*@c: character or argument
*Return: 1 if its upper or 0 if otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
