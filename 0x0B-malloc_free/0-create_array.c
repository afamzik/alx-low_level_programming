#include "main.h"

/**
*create_array - function creates array of chars
*@size: number of element in the array
*@c: the array name arg
*Return: retuns NULL if size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	ary = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		/* sets aray values to char c */
		ary[i] = c;

	/**
	* below, we initialise array to 0
	* recall, mallloc does not initialise the memory
	* that is allocated.
	*/
	*(ary + i) = '\0';

	return (ary);
}
