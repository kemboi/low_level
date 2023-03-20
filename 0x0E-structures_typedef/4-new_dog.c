#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	int name_nw = 0, own_new = 0;

	if (name != NULL && owner != NULL)
	{
		name_nw = strlen(name) + 1;
		own_new = strlen(owner) + 1;
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);

		new_dog->name = malloc(sizeof(char) * name_nw);

		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->owner = malloc(sizeof(char) * own_new);

		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

		new_dog->name = strcpy(new_dog->name, name);
		new_dog->owner = strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}

	return (new_dog);
}
