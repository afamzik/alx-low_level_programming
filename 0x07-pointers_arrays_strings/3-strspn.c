#include "main.h"

/**
*_strspn - this function spells out the lenght of
* the initial matching substring of a string
*@s: the string to  be searched
*@accept: the searched for
*Return: returns the span of the string matched
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++) /*loops the string searched for*/
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j]) /*note and first the first match*/

				break;
		}
		if (!accept[j])
			break; /*returns matches if idx do not match*/

	}

	return (i);
}
