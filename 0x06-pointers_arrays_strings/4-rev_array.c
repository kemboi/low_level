#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses an integer array
 * @a: pointer to arrat variable
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
