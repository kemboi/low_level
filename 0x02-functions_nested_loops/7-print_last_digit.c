#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: input integer
 * Description: this function returns the last digit of an integer
 * Return: integer equivalent of a value
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
		rem = ((n * -1) % 10);
	else
		rem = (n % 10);
	_putchar((rem % 10) + '0');
	return (rem % 10);
}
