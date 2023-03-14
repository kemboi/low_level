#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of char
 * @c:character to allocate
 * @size: size of char array
 * Return: returns nothing
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(size * sizeof(char));
	if (p != NULL)
	{
		for ( ; i < size; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}
	else
		return (NULL);
	free(p);
}
