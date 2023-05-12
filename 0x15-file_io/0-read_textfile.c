#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*read_textfile - reads a file and prints it to stdout
*@filename: pointer to the const char
*@letters: no of letters it should read and print
*Return: alwyas 0
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
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		close(o);
	}
	return (w);
}
