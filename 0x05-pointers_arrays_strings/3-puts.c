#include "main.h"
/**
 * _puts - function that returns the length of a string
 * @str: pointer to char variable
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
