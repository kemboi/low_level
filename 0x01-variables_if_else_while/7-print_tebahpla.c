#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char input;

	for (input = 'z'; input >= 'a'; input--)
	{
		putchar(input);
	}
	putchar('\n');
	return (0);
}
