#include "main.h"
int is_prime(int n, int i);
/**
  * is_prime_number - checks prime number
  * @n: int to check
  *
  * Return: 0 or 1
  */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
  * is_prime -  checks for prime
  * @n: int to check
  * @i: counter
  *
  * Return: 1 for prime or 0 composite
  */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (is_prime(n, i++));
}
