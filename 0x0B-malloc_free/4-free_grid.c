#include "main.h"
#include <stdlib.h>

/**
*free_grid - a program that frees a 2-dimensional array
*@grid: dimension of array
*@height: height or rows of the array
*Return: returns nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[1]);

	free(grid);
}
