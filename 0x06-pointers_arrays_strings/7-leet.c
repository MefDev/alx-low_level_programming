#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the str to change
 * Return: char
 */
char *leet(char *str)
{
	int i;
	int j;
	char *keys;
	char *values;

	keys = "aAeEoOtTlL";
	values = "43071";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; keys[j] != '\0'; j++)
		{
			if (str[i] == keys[j])
			{
				str[i] = values[j / 2];
			}
		}
	}
	return (str);
}
