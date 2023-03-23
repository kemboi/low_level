#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic function to sum integers
 * @separator: string separator
 * @n: number of arguments
 * Return: return null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (!(*separator))
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
