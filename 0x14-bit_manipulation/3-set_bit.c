#include "main.h"

/**
*set_bit - set bit to 1
*@n: the number in question
*@index: the index
*Return: return 1 if successful or -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxbit;
	unsigned long int val = 1;

	maxbit = (sizeof(unsigned long int) * 8);
	if (index > maxbit)
		return (-1);

	val <<= index;
	*n = (*n | val);

	return (1);
}
