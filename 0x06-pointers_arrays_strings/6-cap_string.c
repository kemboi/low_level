#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes words in a sentese
 * @c: character to convert
 * Return: nothing
 */
char *cap_string(char *c)
{
	int ch = 0, i;
	char s[13];

	s[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (c[ch])
	{
		i = 0;

		while (i < 13)
		{
			if ((ch == 0 || c[ch - 1] == s[i])
					&& (c[ch] >= 97 && c[ch] <= 122))
				c[ch] -= 32;

			i++;
		}

		ch++;
	}

	return (c);
}
