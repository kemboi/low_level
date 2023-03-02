#include "main.h"
#include <stdio.h>
/**
 * leet - function
 * @c: character to convert
 * Return: nothing
 */
char *leet(char *c)
{
	int a = 0, b, len = 5;
	char alpha[5] = {'A', 'E', 'O', 'T', 'L'};
	char digit[5] = {'4', '3', '0', '7', '1'};

	while (c[a])
	{
		b = 0;

		while (b < len)
		{
			if (c[a] == alpha[b] || c[a] - 32 == alpha[b])
			{
				c[a] = digit[b];
			}

			b++;
		}

		a++;
	}
	return (c);
}
