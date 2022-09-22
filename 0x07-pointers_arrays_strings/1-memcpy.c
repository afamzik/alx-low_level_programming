#include "main.h"

/**
* _memcpy -  copies n bytes of data from source to destinantion
*Description: this function copies src to dest
*@src: source data
*@dest: destination of data
*@n: number of bytes
*Return: returns the dest with pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int dataSize = n;

	if (dataSize > 0)
	{
		int i;

		for (i = 0; i < dataSize; i++)
			dest[i] = src[i];
	}

	return (dest);
}
