#include "hash_tables.h"

/**
 * hash_djb2 - the Hash function for djb2
 * @str: The string to hash.
 * Return: The hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
