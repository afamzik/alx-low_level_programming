#include "main.h"

/**
* flip_bits - flips bits
*@n: number in question
*@m: other number
* Return: returns the number of bit that were flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int db = 0;
	unsigned long int differ;

	differ = n ^ m;

	do {
		db = db + (differ & 1);
		differ >>= 1;
	} while
		(differ > 0);

	return (db);
}
