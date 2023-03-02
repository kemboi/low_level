#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that returns a copy of a string
 * @dest: pointer to char variable
 * @src: pointer to src string
 * @n: character bytes
 * Return: character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, count = 0;

	while (src[len])
	{
		len++;
	}
	while (count < n && src[count])
	{
		dest[len] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
