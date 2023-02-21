#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: The character to check its sign
 * Return: When + 1, 0 when 0, and - when <0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-1');
	}
	return (result);
}
