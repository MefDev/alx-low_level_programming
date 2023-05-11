#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to a file
 * @filename: the pointer to the filename
 * @text_content: text to write
 * Return: 1 or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fp;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	if (access(filename, W_OK) == -1)
		return (-1);
	if (!text_content)
		return (1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	bytes_written = write(fp, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
