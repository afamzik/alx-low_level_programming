#include "main.h"

/**
*_memset - fill n bytes with a character
*@s: pointer to memory
*@b: constant value
*@n: number of bytes that wll be filled
*Return: memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	int arraySize = n;

	if  (arraySize > 0)
	{

		int i;

		for (i = 0; i < arraySize; i++)
			s[i] = b;
	}

	return (s);
}
