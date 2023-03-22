#include <stdlib.h>
/**
  * print_name - print name of a person
  * @name: name character array
  * @f: function pointer
  *
  * Return: none
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
