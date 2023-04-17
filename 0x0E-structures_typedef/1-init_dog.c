#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: pointer to the structure
 * @name: name of the stucture
 * @age: age of the structure
 * @owner: owner of the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(*d));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

