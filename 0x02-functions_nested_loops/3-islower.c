#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to check its case
 * Return: When lowercase 1 or 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
