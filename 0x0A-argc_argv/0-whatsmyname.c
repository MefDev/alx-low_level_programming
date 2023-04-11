#include "main.h"

/**
 * main - print the name of args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: argments' name if args written by the user 'no args found otherwise'
 */
int main(int argc, char *argv[])
{
	return (argc == 1 ? printf("%s\n", argv[0]) :
		printf("%s", "No args found"));
}
