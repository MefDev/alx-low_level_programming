#include "main.h"

/**
 * copy_file - copy a file to another
 * @src: the source to copy from
 * @dest: the destination to copy to
 */

void copy_file(FILE *src, FILE *dest)
{
	char buffer[1024];
	size_t n;

	while ((n = fread(buffer, 1, sizeof(buffer), src)) > 0)
	{
		if (fwrite(buffer, 1, n, dest) != n)
		{
			fprintf(stderr, "Error: Write failed\n");
			exit(99);
		}
	}
	if (ferror(src))
	{
		fprintf(stderr, "Error: Read failed\n");
		exit(98);
	}

}
