#include <stdio.h>
/**
 * main - program entry function
 * @argc: counts the arguments
 * @argv: array of pointers to command line argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	(void) **argv;
	printf("%s\n", __FILE__);
	return (0);
}
