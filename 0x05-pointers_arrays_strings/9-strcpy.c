 #include "main.h"

/**
*_strcpy - copies integers
*@dest: destination
*@src: source
*Return: returns value
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\n')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
