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
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}
	for (input = 'a'; input <= 'f'; input++)
		putchar(input);
	putchar('\n');
	return (0);
}
