#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print the last digit
 * Return: Always 0
*/
int jack_bauer(void)
{
	int hour;
	int minute;

	char colon_smbl = ':';

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(colon_smbl);
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
