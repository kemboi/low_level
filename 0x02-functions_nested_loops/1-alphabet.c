#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 */
void print_alphabet(void)
{
	char input[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(input[i]);
	}
	_putchar('\n');
}

