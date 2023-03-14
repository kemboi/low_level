#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - two grid
 * @width:rows of the array
 * @height:columns of the array
 * Return: pointer to new string
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width == 0 || height == 0 || height < 0 || width < 0)
		return (NULL);
	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < width; i++)
		array[i] = malloc(height * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
	for (i = 0; i < width; i++)
		free(array[i]);
	free(array);
}
