#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: min value in array
 * @max: max value array
 * Return:returns pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);
	while(min <= max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}

