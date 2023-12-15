#include "search_algos.h"

/**
 * linear_search - Seach for a value in an integer list
 * @array: the list of integers
 * @size: the length of the array
 * @value: the value we're searching for
 * Return: index is successful or -1 otherwise
 */


int linear_search(int *array, size_t size, int value)
{
	int i, current_value;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		current_value = array[i];
		printf("Value checked array[%d] = [%d]\n", i, current_value);
		if (current_value == value)
		{
			return (i);
		}
	}
	return (-1);
}
