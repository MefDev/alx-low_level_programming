#include "search_algos.h"

/**
 * binary_search - Seach for a value in an integer list using binary search
 * @array: the list of integers
 * @size: the length of the array
 * @value: the value we're searching for
 * Return: index is successful or -1 otherwise
 */


int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		mid = floor((left + right) / 2);
		print_array(array, left, right);
		if (array[mid] == value)
		{

			return (mid);
		}
		else if (array[mid] > value)
		{

			right = mid - 1;

		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

/**
 * print_array - print integer numbers in an array
 * @arr: the list of integers
 * @left: the lower bound section
 * @right: the upper bound section
 */

void print_array(int *arr, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", arr[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}
