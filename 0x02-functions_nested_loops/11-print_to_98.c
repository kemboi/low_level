#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: first integer
 * Description: this function returns a series from n...98
 * Return: none
 */
void print_to_98(int n)
{
	int counter;

	if (n < 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			printf("%d", counter);
			if (counter == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (counter = n; counter >= 98; counter--)
		{
			printf("%d", counter);
			if (counter == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
