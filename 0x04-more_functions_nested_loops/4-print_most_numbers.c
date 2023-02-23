#include "main.h"
/**
 * print_most_numbers - from 0..9
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
