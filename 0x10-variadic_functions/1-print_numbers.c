#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i, arg;
    va_list args;
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        arg = va_arg(args, int);
        printf("%d", arg);
        if (i != n - 1 && separator != NULL)
        {
            putchar(',');
            putchar(' ');
        }
       
    }
    printf("\n");
    va_end(args);
}
