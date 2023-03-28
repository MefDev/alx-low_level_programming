#include "main.h"

/**
 * puts2 - Print every character of a string
 * @str: str to print on
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	 _putchar('\n');
}
