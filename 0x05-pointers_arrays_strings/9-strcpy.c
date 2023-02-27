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

	while (*src != '\0')
	{
		*dest++ = *src++;
		counter++;
	}
	*dest++ = '\0';
	return (temp);
}
