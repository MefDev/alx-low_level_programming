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
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 * @s: the string to change
 * @b: the char to change to
 * @n: the byte reserved
 * Return: The changed pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
