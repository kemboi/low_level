#include <stdlib.h>
/**
  * array_iterator - executes a function given as a parameter
  * @array: int array
  * @size: the size of the array
  * @action: is a pointer to the function you need to use
  *
  * Return: none
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
