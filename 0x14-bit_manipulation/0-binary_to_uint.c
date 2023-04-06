#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int checknumber(const char *ch, int count);
/**
 * binary_to_uint - converts from binary to int
 * @b: string pointer
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;
	int length = strlen(b);
	int count = length;

	while (count--)
	{
		if (checknumber(b, length) == 0)
			return (0);
		n += (*(b + i) == 49) ? (1 << count) : 0;
		i++;
	}
	return (n);
}
/**
 * checknumber - checks whether the input string contains only 0 and 1
 * @ch: string pointer to scan
 * @count: length of string
 * Return: 1 if successful or 0 if not.
 */
int checknumber(const char *ch, int count)
{
	int i = 0;

	while (count > 0)
	{
		if (ch[i] != 48 && (ch[i] != 49))
			return (0);
		i++;
		count--;
	}
	return (1);
}
