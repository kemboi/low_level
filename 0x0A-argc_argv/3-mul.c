#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplies two numbers
 * @argc: size of argv[]
 * @argv: array of pointers to the strings
 * Return: none
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
