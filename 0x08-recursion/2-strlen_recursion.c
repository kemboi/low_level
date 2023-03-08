#include "main.h"
/**
 * _strlen_recursion - function to print a string in reverse
 * @s: character array to print
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int length = -1;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
	}
	return (1 + length);
}
