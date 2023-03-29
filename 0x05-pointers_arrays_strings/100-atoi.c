#include "main.h"

/**
 * _atoi - Convert string to int
 * @s: The string to convert
 * Return: the converted string
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 0;
	int check;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 47 && s[i] < 58))
		{
			n = n * 10 + (s[i] - 48);
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		else if (s[i] == '-')
		{
			counter++;
		}
	}
	check = is_negative(counter);
	return (n * check);
}


/**
 * is_negative - Check if negative
 * @counter: The counter
 * Return: -1 if negative 1 otherwise
 */

int is_negative(int counter)
{
	int negative;

	if (counter % 2 == 1)
	{
		negative = -1;
	}
	else
	{
		negative = 1;
	}
	return (negative);
}
