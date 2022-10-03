#include <stddef.h>

/**
*int_index - search for integer in array
*@array: the array
*@size: array size
*@cmp: searching pointer
*Return: return -1 when conditions are met
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
		if (cmp(*(array + x)))
			return (x);

	return (-1);
}
