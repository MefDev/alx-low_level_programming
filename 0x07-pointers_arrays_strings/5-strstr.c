#include "main.h"

/**
 * _strstr - search a string for any of a set of byt
 * @haystack: the string
 * @needle: the character to locate
 * Return: The changed pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j,  counter, length;

	counter = 0;
	length = strlen(needle);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[i])
				counter++;
	}
	if (counter == length)
		return (needle);
	return (NULL);
}
