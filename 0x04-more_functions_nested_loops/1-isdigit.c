#include "main.h"

/**
 * _isdigit - Check is number is digit or not
 * @c: The number to check for
 * Return: (1) if digit 0 otherwise
 */
int _isdigit(int c)
{
	int is_digit = 0;

	is_digit =  (c >= 48  && c <= 57) ? (1) : (0);

	return (is_digit);
}
