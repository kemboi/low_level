#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to check its case
 * Return: When aphabetic character 1 or 0 if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
