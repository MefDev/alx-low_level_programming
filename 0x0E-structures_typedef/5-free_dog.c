#include "dog.h"

/**
 * free_dog - free dogs
 * @d: pointer to the structure
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}