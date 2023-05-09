#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and print it to the posix STDO
 * @filename: the pointer to the file name
 * @letters: number of letters to read
 * Return: actual number or 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	int counter;
	char *buffer;
	size_t fBuffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fptr = fopen(filename, "r");
	if (!fptr)
	{
		free(buffer);
		return (0);
	}
	counter = fread(buffer, sizeof(char), letters, fptr);
	fBuffer = fwrite(buffer, sizeof(char), letters, fptr);
	if (fBuffer)
	{
		free(buffer);
		return (0);
	}
	printf("%s", buffer);
	return (counter);
}
