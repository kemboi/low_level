#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char input[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(input[i]);
	}
	_putchar('\n');
	return (0);
}

