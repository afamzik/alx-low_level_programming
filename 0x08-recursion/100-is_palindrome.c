#include "main.h"

/**
* check - checks indices for match
*@l: left
*@r: right
*Return: return 1 if palindrome
*/

int check(char *l, char *r)
{
	if (l >= r)
		return (1);
	if (*l == *r)
		return (check(r + 1, l - 1));

	return (0);
}

/**
* _strlen - fuction finds the length of string
*@s: string
*Return: returns length
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
* is_palindrome - checks for palindrome
*@s: string to check
*Return: return1 if palindrome is true
*/

int is_palindrome(char *s)
{
	int x = _strlen(s);

	return (check(s, (s + x - 1)));
}

