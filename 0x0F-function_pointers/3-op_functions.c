#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adding two ints
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracts two ints
  * @a: int 1
  * @b: int 2
  *
  * Return: subtractions
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - A*B
  * @a: int A
  * @b: int B
  *
  * Return: Int A.B
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calculates A/B
  * @a: int A
  * @b: int B
  *
  * Return: A/B
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - A%B
  * @a: int A
  * @b: int B
  *
  * Return: A%B
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
