#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Print triangle
 * @size: The size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int decrem;

	decrem = size;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			add_point(decrem);
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			if (i != size - 1)
			{
				_putchar('\n');
			}
			decrem--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
/**
 * add_point - Print spaces n times
 * @n: How many spaces to print
 * Return: nothing
 */
void add_point(int n)
{
	int i;

	for (i = n; i > 1; i--)
	{
		_putchar(' ');
	}
}
