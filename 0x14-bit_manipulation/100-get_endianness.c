#include "main.h"

/**
* get_endianness - checks endian
*Return: returns first value rhat is stored
*/

int get_endianness(void)
{
	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
