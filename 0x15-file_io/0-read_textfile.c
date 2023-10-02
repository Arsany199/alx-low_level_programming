#include "main.h"
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (f == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f);

	return (w);
}
