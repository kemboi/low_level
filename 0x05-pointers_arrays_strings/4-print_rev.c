#include "main.h"
/**
 * print_rev - function that returns the length of a string
 * @s: pointer to char variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
