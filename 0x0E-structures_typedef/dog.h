#ifndef ST_H
#define ST_H
/**
 * struct dog - my dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description:a structure about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
