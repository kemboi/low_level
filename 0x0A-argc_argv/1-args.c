#include <stdio.h>
/**
 * main - print name of the program
 * @argc: size of argv[]
 * @argv: array of pointers to the strings
 * Return: none
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
