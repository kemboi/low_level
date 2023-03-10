#include <stdio.h>
#include <stdlib.h>
int is_digit(int i);
unsigned int _strlen(char *c);
/**
 * main - print multiplies two numbers
 * @argc: size of argv[]
 * @argv: array of pointers to the strings
 * Return: none
 */
int main(int argc, char **argv)
{
	int i;
	unsigned int j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *c = argv[i];

			for (j = 0; j < _strlen(c); j++)
			{
				if ((is_digit(c[j])) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
				sum += atoi(c);
		}
	}
			printf("%d\n", sum);
			return (0);
}
/**
 * is_digit - returns if a digit or not
 * @i: a digit to check
 * Return: 0 or 1
 */
int is_digit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	return (0);

}
/**
 * _strlen - returns length of string
 * @c: char
 * Return: length
 */
unsigned int _strlen(char *c)
{
	unsigned int l = 0;

	while (*c)
	{
		l++;
		++c;
	}
	return (l);
}
