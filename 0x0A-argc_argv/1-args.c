#include "main.h"

/**
 * main - print the number of args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: argments name if args written by the user 'no args found otherwise'
 */
int main(int argc, char *argv[])
{
	if (argv[0] != 0)
		printf("%d\n", argc - 1);
	return (0);
}
