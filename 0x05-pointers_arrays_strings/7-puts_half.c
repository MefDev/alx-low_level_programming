#include "main.h"

/**
 * puts_half - print halfs
 * @str: str to print on
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int i;
	int half;

	i = 0, len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	half = (len + 1) / 2;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	 _putchar('\n');
}
