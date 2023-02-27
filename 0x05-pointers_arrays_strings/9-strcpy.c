#include "main.h"
#include <stdio.h>
/**
 * _strcpy- function that returns the length of a string
 * @dest: pointer to char variable
 * @src: pointer to src string
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (temp);
}
