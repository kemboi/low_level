#include <stdio.h>
/**
 * main - print name of the program
 * @argc: size of argv[]
 * @argv: array of pointers to the strings
 * Return: none
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	else
	printf("%s\n", argv[argc]);
	return (0);
}
