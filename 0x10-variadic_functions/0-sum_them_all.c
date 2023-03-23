#include <stdarg.h>
/**
 * sum_them_all - variadic function to sum integers
 * @n: number of arguments
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	return (0);
}
