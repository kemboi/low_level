#include "main.h"
int _sqrt(int low, int high, int n);
/**
 * _sqrt_recursion - function to print the sqrt of a number
 * @n: int to find sqrt
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n, n));
}
/**
  * _sqrt - Finds natural square root
  * @low: low index
  * @high: max index
  * @n: int to calculate sqrt
  *
  * Return: the natural square root
  */
int _sqrt(int low, int high, int n)
{
	if (n == 1)
		return (1);
	if (low <= high)
	{
		int mid = low + (high - low) / 2;

		if ((mid * mid == n) && ((mid + 1) * (mid + 1) > n))
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			low = mid + 1;
			return (_sqrt(low, high, n));
		}
		else
		{
			high = mid - 1;
			return (_sqrt(low, high, n));
		}
	}
	return (-1);
}
