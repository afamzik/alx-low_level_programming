#include "main.h"

/**
* clear_bit - this clears the bit to 0
*@n: the number
*@index: index within binary number
*Return: returns 1 on success but -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxbit;
	unsigned long int val = 1;

	maxbit = (sizeof(unsigned long int) * 8);
	if (index > maxbit)
		return (-1);

	val = ~(val << index);
	*n = (*n & val);

	return (1);

}
