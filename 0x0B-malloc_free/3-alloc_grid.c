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

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0 ; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
	for (i = 0; i < height; i++)
		free(array[i]);
	free(array);
}
