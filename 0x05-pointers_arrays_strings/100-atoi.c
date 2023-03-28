#include "main.h"

/**
 * _atoi - Convert string to int
 * @s: The string to convert
 * Return: the converted string
 */

int _atoi(char *s)
{
	int i;
	unsigned int n;

	i = 0;
	while (s[i] != '\0')
	{
		n = n * 10 + (s[i] - 48);
		i++;
	}
	return (n);
}
