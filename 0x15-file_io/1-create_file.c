#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - create a file
 * @filename: the pointer to the filename
 * @text_content: text to write
 * Return: 1 or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fptr;
	size_t len;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}
	fptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fptr == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = strlen(text_content);
		bytes_written = write(fptr, text_content, len);
		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(fptr);
			return (-1);
		}
	}
	close(fptr);
	return (1);
}
