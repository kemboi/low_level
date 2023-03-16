#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: byte size
 * Return:returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	for ( ; i < nmemb; i++)
		*(p + i) = 0;
	return (p);
}

