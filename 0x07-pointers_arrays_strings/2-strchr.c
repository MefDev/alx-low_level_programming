#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: The changed pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if  (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == '\0')
		return (&s[i]);
	return (NULL);
}
