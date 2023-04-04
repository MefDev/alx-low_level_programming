#include "main.h"

/**
 * _strpbrk - search a string for any of a set of byt
 * @s: the string
 * @c: the character to locate
 * Return: The changed pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s >= '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return (s);
	}
	return (0);
}
