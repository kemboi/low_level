#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that seaches for a character in an array
 * @s: pointer to char array containing c
 * @c: character to search
 * Return: pointer to memory
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
