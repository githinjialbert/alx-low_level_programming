#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*read_textfile - reads a textfile and prints it to POSIX
*@filename: name of the file
*@letters: the amount of words in the file
*Return: always 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
