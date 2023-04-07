#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the bit to 1 given index
 * @n: pointer to int array
 * @index: index to check
 * Return: int value of the bit in the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 31)
		return (-1);
	mask = (1 << index);
	*n |= mask;
	return (1);
}
