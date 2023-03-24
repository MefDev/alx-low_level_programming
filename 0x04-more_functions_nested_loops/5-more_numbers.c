#include "main.h"
#include <stdio.h>
/**
 * more_numbers- Print from 0 to 14, 5 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int row;
	int tens;
	int ones;

	for (row = 0; row < 10; row++)
	{
		for (i = 0; i < 15; i++)
		{
			ones = i;
			if (i > 9)
			{
				tens = i / 10;
				ones = i % 10;
				_putchar(tens + '0');
			}
			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
