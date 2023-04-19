#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: name of the stucture
 * @age: age of the structure
 * @owner: owner of the structure
 * Return: pointer or NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(dog));
	if (d == NULL)
		return (NULL);
	d->name = malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	d->age = age;
	free(d->owner);
	return (d);
}
