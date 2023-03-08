#include "main.h"
int _sqrt(int n, int num);
/**
 * _sqrt_recursion - function to print the sqrt of a number
 * @n: int to find sqrt
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (n);
	return (_sqrt(n, 2));
}
/**
  * _sqrt - Finds natural square root
  * @num: counter
  * @n: int to calculate sqrt
  *
  * Return: the natural square root
  */
int _sqrt(int n, int num)
{
	int prod = num * num;

	if (prod > n)
		return (-1);

	if (prod == n)
		return (num);
	return (_sqrt(n, num + 1));
}
