#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 * Return: none
 */
void times_table(void)
{
	int col, row, mul;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			mul = col * row;

			if ((mul / 10) == 0)
			{
				if (row != 0)
					_putchar(' ');
				_putchar(mul + '0');

				if (row == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (row == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
