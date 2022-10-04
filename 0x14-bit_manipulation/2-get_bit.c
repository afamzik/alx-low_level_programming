#include "main.h"

/**
* get_bit - this program get the bit at index
* @n: the number
* @index: the index within binary number
* Return: returns bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int my_bit;
	unsigned int maxbit;

	maxbit = (sizeof(unsigned long int) * 8);
	if (index > maxbit)
		return (-1);

	my_bit = ((n >> index) & 1);

	return (my_bit);
}
