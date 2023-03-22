#include <stdlib.h>
/**
  * int_index - searches for an integer.
  * @array: int array
  * @size: the size of the array
  * @cmp: is a pointer to the function to be used to compare values
  *
  * Return: returns the index of the first element -1 if no matching element.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(*(array + i)) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
