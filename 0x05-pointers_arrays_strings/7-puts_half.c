#include "main.h"
/**
 * puts_half - function that returns the length of a string
 * @str: pointer to char variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, j, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (j = n; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
