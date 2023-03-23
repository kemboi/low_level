#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - variadic function to print strings
 * @separator: string separator
 * @n: number of arguments
 * Return: return null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (separator == NULL)
				continue;
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
