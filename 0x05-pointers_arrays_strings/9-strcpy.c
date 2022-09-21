#include "main.h"

/**
*_strcpy - copies integers
*@dest: destination
*@src: source
*Return: returns value
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\n')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';

	return (dest);
}
