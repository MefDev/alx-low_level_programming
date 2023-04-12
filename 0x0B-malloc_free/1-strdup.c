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

	if (str == NULL)
		return (str);
	p  = malloc(sizeof(char) * strlen(str) + 1);
	if (p == NULL)
		return (p);
	i = 0;
	length = strlen(str);
	while (i < length)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
