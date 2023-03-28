#include "main.h"

/**
 * print_array - print halfs
 * @a: pointer to an array
 * @n: number of elms to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		prinf("%d", a[i])
		if (i != n - 1)
		{
			prinf(", ");
		}
	}
}
