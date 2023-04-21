#include "function_pointers.h"

/**
 * int_index - seach for an integer
 * @array: arr of elem
 * @size: the length of the arr
 * @cmp: compare function pointer
 * Return: the index or - 1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i, found;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			found = -1;
			if (cmp(array[i]) != 0)
			{
				found = i;
				return (found);
			}
		}
		return (found);
	}
	else
		return (-1);
}
