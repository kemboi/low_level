#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: pointer to int1
 * @b: pointer to int2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
