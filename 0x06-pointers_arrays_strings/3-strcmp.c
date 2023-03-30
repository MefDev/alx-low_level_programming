#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2:  second str
 * Return: 0 if they're identical
 * otherwise return less than or greather than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int val;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
		{
			val = s1[i] - s2[i];
		}
		else
		{
			val = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (val);
}
