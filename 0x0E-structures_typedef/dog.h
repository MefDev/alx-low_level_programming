#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef DOG
#define DOG
/**
 * struct dog - Short desciption
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

