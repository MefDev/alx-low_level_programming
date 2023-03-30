#include "main.h"
/**
 * reverse_array - reverse an array of n elments
 * @a: the pointer to an array
 * @n: element of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
