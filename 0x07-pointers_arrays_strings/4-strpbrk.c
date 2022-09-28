#include "main.h"
#include <stdio.h>
#define NULL 0

/**
*_strpbrk - searches a string for any of a set of bytes
*@s: the string
*@accept: the target
*Return: returns the result
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned  int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + 1);
	}
	return (NULL);
}
