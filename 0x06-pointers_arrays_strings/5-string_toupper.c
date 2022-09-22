#include "main.h"

/**
*string_toupper - changes all lower case to upper case character
*@str: string to be changed in array
*Return: address to the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
