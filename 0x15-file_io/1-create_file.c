#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*create_file - creates a file
*@filename: name of file to create
*@text_content: string to write to the file
*Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		int len = strlen(text_content);

		num_written = write(fd, text_content, len);
		if (num_written < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
