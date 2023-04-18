#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

