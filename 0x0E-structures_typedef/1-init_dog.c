#include "dog.h"

/*
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: name of the stucture
 * @age: age of the structure
 * @owner: owner of the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

