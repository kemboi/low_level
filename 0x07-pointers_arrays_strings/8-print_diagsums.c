#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints a sum of two diagonals
 * @a: an array
 * @size: size
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, sumdiag1 = 0, sumdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 += a[(size + 1) * i];
		sumdiag2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sumdiag1, sumdiag2);
}
