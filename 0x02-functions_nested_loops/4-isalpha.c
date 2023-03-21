#include <stdio.h>
#include "main.h"
/**
 * _isalpha  - Check for alphabetic chars
 * @c: Check if c is alphabetic character or not
 * Return: Always 0
*/
int  _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
