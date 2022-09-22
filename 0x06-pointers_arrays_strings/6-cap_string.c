#include "main.h"

/**
*_strlen - returns string length
*@s: string
*Return: retuns integer length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
*cap_string - the first letter capitalizing function
*Description: it does thr capitalisation
*@str: string to cap
*Return: returns value
*/

char *cap_string(char *str)
{
	 int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '~' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}')

			str[index] -= 32;
	}
	return (str);
}
