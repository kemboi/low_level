#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int checknumber(const char *ch);
/**
 * binary_to_uint - converts from binary to int
 * @b: string pointer
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int length = strlen(b);
	int power = 0;

	if (b == NULL)
		return (0);

	while (length--)
	{
		if (checknumber(b) == 0)
			return (0);
		n += (*(b + length) == 49) ? (1 << power) : 0;
		power++;
	}
	return (n);
}
/**
 * checknumber - checks whether the input string contains only 0 and 1
 * @ch: string pointer to scan
 * Return: 1 if successful or 0 if not.
 */
int checknumber(const char *ch)
{
	int i = 0;

	while (ch[i])
	{
		if (ch[i] != 48 && (ch[i] != 49))
			return (0);
		i++;
	}
	return (1);
}
