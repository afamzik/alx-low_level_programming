#include <stddef.h>
/* this  will define the size _t */
#include "function_pointers.h"

/**
* array_iterator - this program runs a function on an array
*@array: array used
*@size: the array size
*@action: the pointer to the fuction
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*this is to match the data type*/
	size_t x;

	if (array != NULL && action != NULL)
		for (x = 0; x < size; x++)
			action(*(array + 1));
}
