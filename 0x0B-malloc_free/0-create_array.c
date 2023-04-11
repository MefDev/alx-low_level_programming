#include "main.h"

/**
 * create_array - create arr of chars and intialize it with a specific char
 *@size: the size
 *@c: the char
 * Return: 0 means success 1 means failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p  = malloc(sizeof(int) * size);
	if (p == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);

}
