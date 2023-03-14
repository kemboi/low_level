#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - two grid
 * @grid:pointer to 2D array
 * @height:rows of the array
 * Return: pointer to new string
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
