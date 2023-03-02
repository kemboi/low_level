i#include "main.h"
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
	char *temp = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (temp);
}
