#include "main.h"

/**
 * string_nconcat -concatenates two strings
 * @s1: first str
 * @s2: second str
 * @n: size
 * * Return: pointer and NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
	{
		size = strlen(s2);
	}
	else
		size = n;

	ptr =  malloc(strlen(s1) + 1 + size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= size; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);

}
