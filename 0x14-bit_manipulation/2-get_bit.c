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
	int value = 0;
	int mask;

	mask = (n >> index);
	value = 1 & mask;
	if (mask > 0)
		return (value);
	return (-1);
}
