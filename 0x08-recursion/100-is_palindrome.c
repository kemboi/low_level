#include "main.h"
int is_pal(int start, int end, char *s);
/**
  * is_palindrome - checks palindrome string
  * @s: string to check
  *
  * Return: 0 or 1
  */
int is_palindrome(char *s)
{
	int len = 0, start = 0, end;

	while (*s)
	{
		s++;
		len++;
	}
	end = len - 1;

	return (is_pal(start, end, s));
}

/**
  * is_pal -  checks for palindrome
  * @start: low pointer
  * @end: high pointer
  * @s: char array
  *
  * Return: 1 for prime or 0 composite
  */
int is_pal(int start, int end, char *s)
{
	if (end == 0)
		return (1);

	if (start <= end)
	{
		if (s[start] == s[end])
		{
			is_pal(++start, --end, s);
		}
		else
			return (0);
	}
	return (1);
}
