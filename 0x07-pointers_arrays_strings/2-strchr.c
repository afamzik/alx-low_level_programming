#include "main.h"
#define NULL 0
/**
*_strchr - this matches orlocates a character in a string
*@s: the string of characters
*@c: the character to be returned
*Return: the pointer returns first occurrence
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return (0);
	/**
	* while (*(s + i) != '\0' && *(s + i) != c)
	*i++;
	*
	*if (*(s + i) == c)
	*	return (s + i);
	*else
	*	return (NULL);
	*/
}
