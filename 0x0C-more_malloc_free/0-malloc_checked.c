#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - this program allocates memory
*using malloc
*@b: the memory size allocated
*Return: returns pointer or exits if NULL
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
