#include "main.h"

/**
 * _strdup - Point to a new adress contain a cp of str
 *@str: the string
 * Return: 0 means success 1 means failure
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *p;

	p  = malloc(sizeof(*str));
	if (p == 0)
		return (NULL);
	i = 0;
	length = strlen(str);
	while (i < length)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
