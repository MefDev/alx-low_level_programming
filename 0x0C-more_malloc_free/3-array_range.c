#include "main.h"

/**
 * array_range - create an array of integers
 * @min: where to start
 * @max: where to finish
 * Return: pointer and NULL otherwise
 */
int *array_range(int min, int max)
{
	int *ptr;
	int sum, i;

	if (min > max)
		return (NULL);
	sum  = max - min;
	ptr =  malloc(sizeof(int) * (sum + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <=  max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
