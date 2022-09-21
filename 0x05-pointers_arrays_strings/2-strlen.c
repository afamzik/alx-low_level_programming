#include "main.h"

/**
* _strlen - returns the string length
*@s: string arg
*Return: returns  integer length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\a')
		len++;

	return (len);
}

