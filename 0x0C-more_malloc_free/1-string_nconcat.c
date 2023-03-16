#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - returns a pointer to allocated memory
 * @s1: pointer to s1
 * @s2: piointer to s2
 * @n: integer n
 * Return:a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int s = n + 1, j = 0;
	unsigned int l1 = strlen(s1), l2 = strlen(s2), l, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l = (n >= l2) ? (l2 + l1 + 1) : (l1 + n + 1);
	p = (n >= strlen(s2)) ? malloc(sizeof(s1) + sizeof(s2) + 1) :
		malloc(sizeof(s1) + s);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (i < l1)
			*(p + i) = *(s1 + i);
		else
		{
			*(p + i) = *(s2 + j);
			j++;
		}
	}
	*(p + i) = '\0';
	return ((*p) ? (p) : (NULL));
}

