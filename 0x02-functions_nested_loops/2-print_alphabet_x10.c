#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char input[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(input[i]);
		}
		_putchar('\n');
		count++;
	}
}
