#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: to be printed between the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char  *arg;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		(arg != NULL) ? printf("%s", arg) : printf("(nil)");

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
