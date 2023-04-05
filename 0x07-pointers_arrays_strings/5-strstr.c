#include "main.h"

/**
 * _strstr - search a string for any of a set of byt
 * @haystack: the string
 * @needle: the character to locate
 * Return: The changed pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pHay;
		char *pNeedle;

		pHay = haystack;
		pNeedle = needle;
		while (*pHay == *pNeedle && *pNeedle != '\0')
		{
			pHay++;
			pNeedle++;
		}
	if (*pNeedle == '\0')
		return (haystack);
	}
	return (0);
}
