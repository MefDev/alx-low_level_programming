#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: the name to print
 * @f: a function to callback
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
