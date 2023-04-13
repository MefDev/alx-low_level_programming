#include "main.h"

/**
 * malloc_checked - Allocate memeory using malloc
 * @b: unsigned int used as the size
 * Return: pointer if succeed, exit(98) otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
