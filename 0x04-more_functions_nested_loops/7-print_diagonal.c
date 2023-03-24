#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Print diagonal n times
 * @n: The number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <  n; i++)
		{
			_putchar('\\');
			if (i != n - 1)
			{
				_putchar('\n');
				add_space(i);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
/**
 * add_space - add space  n times
 * @n: The number of times
 * Return: nothing
 */
void add_space(int n)
{
	int i;

	_putchar(' ');
	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
