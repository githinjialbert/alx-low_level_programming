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
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}
	w = write(buffer, r, STDOUT_FILENO);
	if (w == -1 || (size_t)w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}
	free(buffer);
	close(o);

	return(w);
}
