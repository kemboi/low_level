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

	for (input = 'a'; input <= 'z'; input++)
	{
		putchar(input);
	}
	for (input = 'A'; input <= 'Z'; input++)
		putchar(input);
	putchar('\n');
	return (0);
}
