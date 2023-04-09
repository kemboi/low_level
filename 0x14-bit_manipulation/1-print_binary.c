#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
void binary_helper(unsigned long int);
/**
 * print_binary - converts from decimal to binary
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	binary_helper(n);
}
/**
 * binary_helper - shifts right
 * @n: decimal integer
 * Return: binary
 */
void binary_helper(unsigned long int n)
{
	if (n < 1)
		return;
	binary_helper(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
