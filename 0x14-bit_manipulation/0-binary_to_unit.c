#include "main.h"

/**
*binary_to_unit - converts binary to an unsigned number
*@b: the binary number
*Return: rreturns the unsigned integer
*/

unsigned int binary_to_unit(const char *b)
{
	int binlen = 0;
	int x;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	while (b[binlen] != '\0')
		binlen++;

	binlen = binlen - 1;

	x = 0;
	while (b[x])
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (sum);

		if (b[x] == '1')
			sum += (1 * (1 << binlen));
		x++;
		binlen--;
	}

	return (sum);
}
