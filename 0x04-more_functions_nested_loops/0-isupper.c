#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c: The character to check for
 * Return: (1) if success 0 otherwise
 */
int _isupper(int c)
{
	int is_uppr = 0;

	is_uppr =  (c >= 65 && c <= 90) ? (1) : (0);

	return (is_uppr);
}
