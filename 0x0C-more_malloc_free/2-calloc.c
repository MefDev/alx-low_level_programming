#include "main.h"

/**
 * *_calloc - Allocate memory for an array
 * @nmemb: elements to allocate memory for
 * @size: of the this elements
 *Return: pointer and NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
