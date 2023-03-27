#include "main.h"

/**
 * print_rev - print the whole string in reverse
 * @str: the string print
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int iterate;	
	int i;

	len = 0, iterate = 0;
	while (s[iterate] != '\0')
	{
		len++;
		iterate++;
	}

	i = len - 1;
	while (s[i] != '\0')
	{
		char ltr = *(s + i);

		_putchar(ltr);
		i--;
	}
	_putchar('\n');
}
