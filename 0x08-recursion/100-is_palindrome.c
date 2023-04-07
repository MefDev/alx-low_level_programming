#include "main.h"
/**
 * is_palindrome - Check if it's palindrome or not
 *@s: the string to check for
 *Return: return 1 meaning prime 0 otherwise
 */

int is_palindrome(char *s)
{
	return (palindrom_helper(s, strlen(s)));
}
/**
 * palindrom_helper - Check if palindrome or not
 *@str: the string to check for
 *@length: length of the previous two chars
 *Return: return 1 meaning palindrom  0 otherwise
 */
int palindrom_helper(char *str, int length)
{
	return ((length == 0 || length == 1) ? 1 : (str[0] != str[length - 1] ?
				0 : palindrom_helper(str + 1, length - 2)));
}
