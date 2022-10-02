#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - this program returns a pointer to a newly
* allocated space in memory
*@str: this is the string
*Return: this returns NULL if the str = NULL
*/

char *_strdup(char *str)
{
	char *dupstr;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++, size++;

	/**
	* increments size by 1 so to allocate memory to
	* null terminator
	*/
	size++;

	dupstr = malloc(sizeof(char) * size);

	if (dupstr == NULL)
		return (NULL);

	i = 0;
	for (i = 0; i < size; i++)
	{
		*(dupstr + i) = *(str + i);
	}

	return (dupstr);
}
