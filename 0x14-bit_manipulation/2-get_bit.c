#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value
 * @index: index to check
 * Return: value of the bit in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > 31)
		return (-1);
	mask = (n >> index);
	return (mask & 1);
}
