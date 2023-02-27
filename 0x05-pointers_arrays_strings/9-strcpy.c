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
	int counter = 0;

	while (*src)
	{
		*dest++ = *src++;
		counter++;
	}
	dest[counter++] = '\0';
	return (temp);
}
