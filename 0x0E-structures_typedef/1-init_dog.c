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
	if (d == NULL)
		exit(EXIT_FAILURE);
	d->name = malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
		exit(EXIT_FAILURE);
	d->name = name;
	d->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
		exit(EXIT_FAILURE);
	d->owner = owner;
	d->age = age;
}
