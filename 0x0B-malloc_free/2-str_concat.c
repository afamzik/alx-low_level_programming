#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - this function concatenates two strings
*@s1: first string
*@s2: second string
*Return: returns NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	int size1 = 0, size2 = 0,  size = 0;
	int x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/*size of first string */
	for (x  = 0; s1[x]; x++)
		size1++;
	for (x = 0;  s2[x]; x++)
		size2++;

	size = size1 + size2;

	size++;

	con_cat = malloc(sizeof(char) * size);

	if (con_cat == NULL)
		return (NULL);
	x = 0;
	for (x = 0; x < size1; x++)
		con_cat[x] = s1[x];
	x = size1;
	for (x = size1; x < size2; x++)
		con_cat[x] = s2[x];

	return (con_cat);
}
