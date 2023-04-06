#include "main.h"

/**
 * is_prime_number - Check for prime
 *@n: the number to check for
 *Return: return 1 meaning prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0 && n > 2)
	{
		return (0);
	}
	else if (n < 2 && n != 2)
	{
		return (0);
	}
	else
		return (check_odd_divisors(n, 3));
}

/**
 * check_odd_divisors - Check for other divisors other than 1 and n
 *@n: the value to check its divisors
 *@odd: odd divisor
 *Return: 1 meaning prime 0 otherwise
 */

int check_odd_divisors(int n, int odd)
{
	if (odd * odd > n)
		return (1);
	if (n % odd == 0)
		return (0);
	else
		return (check_odd_divisors(n, odd + 2));
}
