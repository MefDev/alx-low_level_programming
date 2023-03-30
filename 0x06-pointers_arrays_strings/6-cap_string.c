#include "main.h"
/**
 * cap_string -  Capitalize the first word of text
 * @str: the str to change
 * Return: char
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
					|| str[i - 1] == ',' || str[i - 1] == ';'
					|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
					|| str[i - 1] == '\"' || str[i - 1] == '(' || str[i - 1] == ')'
					|| str[i - 1] == '{' || str[i - 1] == '}')
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
