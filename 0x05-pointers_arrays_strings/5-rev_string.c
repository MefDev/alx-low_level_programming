#include "main.h"

/**
 * rev_string - print the whole string in reverse
 * @s: the string print
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int i;
	int last_elm;
	int start;
	int last;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	last_elm = len - 1;
	while (i <= (last_elm / 2))
	{
		start  = s[i];
		last = s[last_elm - i];
		s[last_elm - i] = start;
		s[i] = last;
		i++;
	}
}
