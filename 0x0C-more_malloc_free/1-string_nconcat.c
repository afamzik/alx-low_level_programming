#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*string_nconcat - this function concatenantes two strings
*@s1: first string
*@s2: second string
*@n: data size
*Return: returns NULL if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int x = 0, y = 0;
	int len1 = 0, len2 = 0, len;

	if (n < 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		len1++;
	for (y = 0;  s2[y]; y++)
		len2++;

	/*assigning n to the length of s2*/
	if (n >= len2)
		len2 = n;

	len = len1 + len2;
	len++;

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	x = 0;
	for (x = 0; s1[x]; x++)
		ptr[x] = s1[x];
	y = 0;
	for (y = 0; y < len2; y++)
		ptr[x + y] = s2[y];

	ptr[x + y] = '\0';

	return (ptr);
}
