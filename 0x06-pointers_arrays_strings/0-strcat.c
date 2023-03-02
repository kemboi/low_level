#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that returns concatinated string
 * @dest: pointer to char variable
 * @src: pointer to src string
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (temp);
}
