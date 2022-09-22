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

	int matches = 0;

	while (s[i] != '\0')	/* loops through the string s */
	{
		for (j = 0; accept[j] != '\0'; j++) /*loops the string searched for*/
		{
			if (s[i] == accept[j]) /*note and first the first match*/
			{
				matches++;
				break;
			}

		if (!accept[j])
			break; /*returns matches if idx do not match*/
		}

		i++;
	}

	return (matches);
}
