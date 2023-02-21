#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int c;

	while (count < 10)
	{
		for (c = 0; c < 26; c++)
		{
			_putchar(c + 'a');
		}
		_putchar('\n');
		count++;
	}
}
