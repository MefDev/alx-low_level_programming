#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the string to change
 * @src: the pointer to to change to
 * @n: the byte reserved
 * Return: The changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
