#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to char variable
 * Return: nothing
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
