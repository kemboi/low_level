#include <stdio.h>
#include <unistd.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int n = 0;

	n = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", n);
	return (1);
}
