#include "main.h"
#include <stdio.h>
/**
 * print_square - Print line n times
 * @size: The number of times
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (i = 0; i <  size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
