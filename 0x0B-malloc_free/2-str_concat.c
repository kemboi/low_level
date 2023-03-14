#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concat strings
 * @s1:first string
 * @s2:second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size = 0, i = 0, j = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	size = strlen(s1) + strlen(s2);
	p = malloc((size * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	for ( ; i < strlen(s1); i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = strlen(s1); i <= size; i++, j++)
		*(p + i) = *(s2 + j);
	return (p);
	free(p);
}
