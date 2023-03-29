#include "main.h"

/**
 * _strncpy - copy from src to dest n times
 * @dest: destination var
 * @src: source str
 * @n:  number of times
 * Return: return the copied str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
