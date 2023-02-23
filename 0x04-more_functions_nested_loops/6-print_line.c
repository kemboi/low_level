#include "main.h"
/**
 * print_line - print -
 * @n: number of times dashes will be printed
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
