#include "main.h"
#include <stdio.h>
int is_pal(int start, int end, char *s);
int checkl(char *s);
/**
  * is_palindrome - checks palindrome string
  * @s: string to check
  *
  * Return: 0 or 1
  */
int is_palindrome(char *s)
{
	int start = 0, len = checkl(s), end = 0;

	end = len - 1;
	return (is_pal(start, end, s));
}
/**
 * checkl - checks length of string
 * @s: string to check length
 * Return: length
 */
int checkl(char *s)
{
	int len = 0;

	if (*s)
	{
		len = checkl(++s);
	}
	return (1 + len);
}

/**
  * is_pal -  checks for palindrome
  * @start: low pointer
  * @end: end pointer
  * @s: char array
  *
  * Return: 1 for prime or 0 composite
  */
int is_pal(int start, int end, char *s)
{
	if (end == 0)
		return (1);

	else if (start <= end)
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
