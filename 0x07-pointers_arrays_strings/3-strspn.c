#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: the string
 * @accept: the str to check to
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter, isTrue;

	counter = 0;
	isTrue = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		isTrue = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				isTrue = 1;
		}
		if (isTrue == 0)
		{
			break;
		}
		else
		{
			counter++;
		}
	}
	return (counter);
}

