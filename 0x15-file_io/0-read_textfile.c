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
	size_t counter;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	fptr = fopen(filename, "r");
	if (!fptr)
	{
		free(buffer);
		return (0);
	}
	counter = fread(buffer, sizeof(char), letters, fptr);
	if (ferror(fptr))
	{
		free(buffer);
		fclose(fptr);
		return (0);
	}
	buffer[counter] = '\0';
	printf("%s", buffer);
	free(buffer);
	fclose(fptr);
	return (counter);
}
