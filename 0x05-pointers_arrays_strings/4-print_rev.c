#include "main.h"

/**
 * print_rev - print the whole string in reverse
 * @str: the string print
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;
	int i = len;

	while (s[i] != '\0')
	{
		char ltr = *(s + i);

		_putchar(ltr);
		i--;
	}
	_putchar('\n');
}
