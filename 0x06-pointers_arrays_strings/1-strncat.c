#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that returns concatinated string
 * @dest: pointer to char variable
 * @src: pointer to src string
 * @n: character bytes
 * Return: character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, count = 0;

	while (dest[len])
	{
		len++;
	}
	while (count < n && src[count])
	{
		dest[len] = src[count];
		count++;
		len++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
