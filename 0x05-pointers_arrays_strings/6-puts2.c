#include "main.h"
/**
 * puts2 - function that returns the length of a string
 * @str: pointer to char variable
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if ((len % 2) == 0)
		{
			_putchar(str[len]);
			len++;
		}
		len++;
	}
	_putchar('\n');
}
