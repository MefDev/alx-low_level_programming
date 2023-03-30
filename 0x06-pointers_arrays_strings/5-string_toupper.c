#include "main.h"
/**
 * string_toupper - change to uppercase
 * @str: the str to change
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);

}
