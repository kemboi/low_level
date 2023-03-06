#include "main.h"
/**
 * _memcpy - function function copies n bytes from memory
 * area src to memory area dest
 * @src: pointer to char array containing info to copy
 * @dest: character array to copy to
 * @n: number of bytes
 * Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;
	unsigned int counter;

	result = &dest[0];
	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}

	return (result);
}
