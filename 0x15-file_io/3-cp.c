#include "main.h"

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: the actual args
 * Return: 0 or error on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_result;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	while ((read_result = read(file_from, buffer, 1024)) > 0)
		if (write(file_to, buffer, read_result) != read_result)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]), exit(99);
	if (read_result == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_to), exit(100);
	return (0);
}
