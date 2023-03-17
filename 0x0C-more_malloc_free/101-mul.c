#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int is_digit(char **arg);
/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: pointers to arguments
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}
	if (is_digit(argv) == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}
	else
	{
		printf("%ld\n", (long int) (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
/**
 * is_digit - ...
 * @arg: ...
 * Return:..
 */
int is_digit(char **arg)
{
	unsigned int i, j;

	for (i = 0; i < strlen((arg)[1]); i++)
	{
		if (!(arg[1][i] >= 48 && arg[1][i] <= 57))
			return (0);
	}

	for (j = 0; j < strlen((arg)[2]); j++)
	{
		if (!(arg[2][j] >= 48 && arg[2][j] <= 57))
			return (0);
	}
	return (1);
}
