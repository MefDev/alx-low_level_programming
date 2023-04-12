#include "main.h"

/**
 * str_concat - Point to a new adress contain a cp of str
 *@s1: the first string
 *@s2: the second string
 * Return: 0 means success 1 means failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_length, s2_length;
	char *p;

	if (s2 == NULL)
		s2 = "";
	if (s1 ==  NULL)
		s1 = "";

	p  = malloc((sizeof(char) * strlen(s1))
			+ (sizeof(char) * strlen(s2) + 1));
	if (p == NULL)
		return (p);
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	i = 0;
	while (i <  s1_length)
	{
		p[i] = s1[i];
		i++;
	}
	i = s1_length;
	j = 0;
	while (j < s2_length)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
