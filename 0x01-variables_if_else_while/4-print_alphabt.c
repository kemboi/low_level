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
		if (input != 'q' && input != 'e')
			putchar(input);
	}
		putchar('\n');
	return (0);
}
