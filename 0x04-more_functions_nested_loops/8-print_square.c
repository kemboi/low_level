#include "main.h"
/**
 * print_square - print '\'
 * @size: number of times # will be printed
 * Return: none
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
