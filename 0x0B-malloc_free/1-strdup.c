#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str:string to duplicate
 * Return: pointer
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *p;

	if (*str == '\0')
		return (NULL);
	size = strlen(str);
	p = malloc((size * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	else
	{
		for ( ; i <= size; i++)
		{
			*(p + i) = *(str + i);
		}
		return (p);
	}
	free(p);
}
