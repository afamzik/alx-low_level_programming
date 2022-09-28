#include <stdio.h>

/**
*print_diagsums - print sums of diagonals in matrix
*@a: matrix
*@size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int diagSum1 = 0;
	int diagSum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagSum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagSum2 += a[i];
	}

	printf("%d, %d\n", diagSum1, diagSum2);
}
