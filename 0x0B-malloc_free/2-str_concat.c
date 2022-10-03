#include "main.h"
#include <stdlib.h>
/**
* str_concat - this function concatenates two strings
*@s1: first string
*@s2: second string
*Return: returns NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	int size1, size2, size;
	int x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/*size of first string */
	for (x = 0; s1[x]; x++)
		size1++;
	/*size of second string*/
	for (x = 0; s2[x]; x++)
		size2++;
	/*total size of two strings*/
	size =  size1 + size2;
	/* null allocation of memory*/
	size++;

	con_cat = malloc(sizeof(char) * size);

	if (con_cat == NULL)
		return (NULL);

	/* copy s1 to cocat */
	x = 0;
	for (x = 0; x < size1; x++)
		*(con_cat + x) = *(s1 + x);
	/* copy s2 to concat */
	x = 0;
	for (x = size1; x < size; x++)
		con_cat[x] = s2[x];

	return (con_cat);
}
