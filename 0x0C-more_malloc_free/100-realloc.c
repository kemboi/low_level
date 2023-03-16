#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - creates an array of integers
 * @ptr: previous block
 * @old_size: size of previous memory block
 * @new_size: size of the new memory block
 * Return:returns pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(char) * new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

	if (new_size > old_size)
	{
		p = malloc(sizeof(char) * new_size);
		if (p == NULL)
			return (NULL);
		while (i < old_size && i < new_size)
		{
			*(p + i) = ((char *)ptr)[i];
			i++;
		}
	}
		free(ptr);
		return (p);
}
