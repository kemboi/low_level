#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to allocated memory
 * @b:memory to allocate
 * Return:a pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b));

	if (p == NULL)
		exit(98);
	return (void *)p;
}

