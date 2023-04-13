#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional
 * grid previously created
 * @grid: 2 dimensional grid
 * @height: height dimensions of the grid
 * Description: frees memory of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
