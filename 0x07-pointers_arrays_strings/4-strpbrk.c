#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to accept string
 * @accept: point to string to search (s)
 * Return: pointer to memory
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;
	char *copy = accept;

	result = &s[0];
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = copy;
	}
	result = NULL;
	return (result);
}
