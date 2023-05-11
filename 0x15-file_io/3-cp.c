#include "main.h"

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: the actual args
 * Return: 0 or error on failure
 */

int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	FILE *src;
	FILE *dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	src = fopen(file_from, "r");
	if (!src)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest = fopen(file_to, "w");
	if (!dest)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	copy_file(src, dest);

	if (fclose(src) == -1 || fclose(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}
