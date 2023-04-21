#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a param on each elem of an arr
 * @array: arr of elem
 * @size: the length of the arr
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
