#include "main.h"
/**
 * _memset - function fills the first n bytes of memory
 * area pointed by the s with constant byte b
 * @s: pointer to memory location
 * @b: character variable
 * @n: number of bytes
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *result;
	unsigned int counter;

	result = &s[0];
	counter = 0;
	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}

	return (result);
}
