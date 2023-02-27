#include "main.h"
/**
 * rev_string - function that returns the reverse of a string
 * @s: pointer to char variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, index, ind = 1;
	char *aux, temp;

	aux = s;
	while (s[len] != '\0')
	{
		len++;
	}
	while (ind < len)
	{
		aux++;
		ind++;
	}
	for (index = 0; index < (len / 2); index++)
	{
		temp = s[index];
		s[index] = *aux;
		*aux = temp;
		aux--;
	}
}
