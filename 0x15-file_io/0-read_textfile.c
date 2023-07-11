#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*read_textfile - reads a textfile and prints it to POSIX
*@filename: the name of the file
*@letters: number of letters it should read and print
*Return: actual number of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t Totalbytes_read = 0, Bytesread, Byteswritten;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	Bytesread = read(file, buffer, letters);
	if (Bytesread == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	Byteswritten = write(STDOUT_FILENO, buffer, Bytesread);
	if (Byteswritten == -1 || Byteswritten != Bytesread)
	{
		free(buffer);
		close(file);
		return (0);
	}
	Totalbytes_read += Bytesread;
	free(buffer);
	close(file);

	return (Totalbytes_read);
}
