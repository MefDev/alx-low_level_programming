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
	int st_str;
	int nd_str;
	int val_returned;

	val_returned = 0;
	st_str = char_count(s1);
	nd_str = char_count(s2);
	if (st_str < nd_str)
	{
		val_returned = s1[0] - s2[0];
	}
	else if (st_str > nd_str)
	{
		val_returned = s1[0] - s2[0];
	}
	else
	{
		val_returned = 0;
	}
	return (val_returned);
}

/**
 * char_count - count how many chars
 * @str: the str to count its chars
 * Return: return how many chars
 */

int char_count(char *str)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
