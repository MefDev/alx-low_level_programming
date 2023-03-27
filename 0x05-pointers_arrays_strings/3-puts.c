#include "main.h"

/**
 * _puts - print the whole string
 * @str: the string print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char ltr = *(str + i);

		_putchar(ltr);
		i++;
	}
}
