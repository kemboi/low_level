#include <stdio.h>
#include "main.h"
/**
 * _strstr - a function finds the first occurrence of the substring needle
 * @haystack: pointer to string
 * @needle: point to substring
 * Return: pointer to memory
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return (NULL);
}
