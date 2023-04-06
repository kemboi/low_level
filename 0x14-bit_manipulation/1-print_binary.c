#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - converts from decimal to binary
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	char c;

	while (mask > 0)
	{
		c = (n & mask) ? '1' : '0';
		_putchar(c);
		mask >>= 1;
	}
}
