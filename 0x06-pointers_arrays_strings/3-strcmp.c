#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that returns the comparison between s1 and s2
 * @s1: pointer to char variable
 * @s2: pointer to src string
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
