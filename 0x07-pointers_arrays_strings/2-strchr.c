#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that seaches for a character in an array
 * @s: pointer to char array containing c
 * @c: character to search
 * Return: pointer to memory
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = &s[0];
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	result = NULL;

	return (result);
}
