#include "main.h"
/**
 * puts2 - function that returns the length of a string
 * @str: pointer to char variable
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
