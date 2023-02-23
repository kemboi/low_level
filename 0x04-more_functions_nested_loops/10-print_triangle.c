#include "main.h"
/**
 * print_triangle - print -
 * @size: number of times dashes will be printed
 * Return: none
 */
void print_triangle(int size)
{
	int i, j, k = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar('#');
			}
			k--;
			_putchar('\n');
		}
	}
}
