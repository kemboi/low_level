#include "main.h"
/**
 * puts_half - function that returns the length of a string
 * @str: pointer to char variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, j;

	while (str[len] != '\0')
	{
		len++;
	}
	if (((len + 1) % 2) == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for ((j = ((len + 1 - 1) / 2)); j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
