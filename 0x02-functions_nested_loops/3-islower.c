#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: Check if c is lowercase or not
 * Return: Always 0
*/
int  _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
