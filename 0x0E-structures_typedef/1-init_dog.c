#include "dog.h"
/**
 * init_dog - function to initialize a struct
 * @d:struct variable
 * @name:name field
 * @age:age of dog
 * @owner:dog owner
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
