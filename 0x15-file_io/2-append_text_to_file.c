#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*append_text_to_file - appends text at the end of a file
*@filename: name of the file
*@text_content: string to add to the end of the file
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int end;
	int r;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (end = 0; text_content[end];)
			end++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	r = write(fd, text_content, end);
	if (fd == -1 || r == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
