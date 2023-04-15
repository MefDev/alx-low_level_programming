#include "main.h"

/**
 * _realloc - Reallocate memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer and NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s_ptr = NULL;
	unsigned int i;

	s_ptr = malloc(new_size);
	if (s_ptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (s_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			((char *)s_ptr)[i] = ((char *)ptr)[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			((char *)s_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (s_ptr);
}
