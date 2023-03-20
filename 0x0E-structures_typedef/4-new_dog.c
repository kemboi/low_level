#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog -  creates a new dog
 * @name:..
 * @age:..
 * @owner:..
 * Return:..
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name, *cpy_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpy_name = malloc(len_name + 1);
	if (cpy_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpy_name[i] = name[i];
	cpy_name[i] = '\0';

	cpy_owner = malloc(len_owner + 1);
	if (cpy_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpy_owner[i] = owner[i];
	cpy_owner[i] = '\0';

	new_dog->name = cpy_name;
	new_dog->age = age;
	new_dog->owner = cpy_owner;
	return (new_dog);
}
