#include "main.h"
/**
 * _abs - print the sign of a number
 * @n: If n positive print + otherwise -
 * Return: Always 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
