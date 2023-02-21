#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 * @n: input integer
 * Description: this function returns absolute value of an integer
 * Return: integer equivalent of a value
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else
	{
		result = (n * -1);
	}
	return (result);
}
