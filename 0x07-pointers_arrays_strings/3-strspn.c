#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix string
 * Return: length of substring prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int match;
	int finallength = 0;
	char *copy = accept;

	while (*s)
	{
		match = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
			break;
		s++;
		accept = copy;
		finallength++;
	}
	return (finallength);
}
