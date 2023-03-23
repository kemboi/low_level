#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - variadic function to print anything
 * @format: number of arguments
 * Return: return null
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ap;
	char *temp;

	va_start(ap, format);

	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				temp = va_arg(ap, char *);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if (*(format + i + 1) != '\0' && ((*(format + i) == 'i') ||
					(*(format + i) == 'f') || (*(format + i) == 's') ||
				(*(format + i) == 'c')))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
