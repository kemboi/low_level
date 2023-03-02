#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that converts characters to upper case
 * @c: character to convert
 * Return: nothing
 */
char *string_toupper(char *c)
{
	char *beg = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			c -= 32;
		c++;
	}
	return (beg);
}
