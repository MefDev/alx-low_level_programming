#include "main.h"

/**
 * _strcpy - print halfs
 * @dest: Where to copy
 * @src: the src to be printed
 * Return: The copied dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char lastElm;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	lastElm = '\0';
	dest[i] += lastElm;
	return (dest);
}
