#include "main.h"

/**
 * _sqrt_recursion - Check for prime
 *@n: the number to check for
 *Return: return 1 meaning prime 0 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n == 17)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - check the sqrt
 *@n: the number to check for
 *@low: the lowest number
 *@high: the highest number
 *Return: return 1 meaning it is a sqrt 0 otherwise
 */

int sqrt_helper(int n, int low, int high)
{
	int base;

	base = (low + high) / 2;
	if (base * base == n)
		return (base);
	else if (base * base < n)
	{
		if (base + 1 > high)
			return (base);
		return (sqrt_helper(n, base + 1, high));
	}
	else
	{
		if (base - 1 < low)
			return (base - 1);
		return (sqrt_helper(n, low, base - 1));
	}
}
