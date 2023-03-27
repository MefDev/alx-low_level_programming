#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: the string to count its length
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
