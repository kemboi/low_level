#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - counts number of bits required to flip to change a number
 * @n: given integer
 * @m: number to change to
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask;

	mask = (n ^ m);
	return (count_setbits(mask));
}
/**
 * count_setbits - counts number of set bits
 * @xor: result of nXORm
 * Return: integer count
 */
unsigned int count_setbits(unsigned int xor)
{
	int count = 0;

	while (xor)
	{
		xor &= xor - 1;
		count++;
	}
	return (count);
}
