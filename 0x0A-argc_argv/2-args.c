#include <stdio.h>
/**
 * main - print argument of the program
 * @argc: size of argv[]
 * @argv: array of pointers to the strings
 * Return: none
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
