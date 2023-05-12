#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
*append_text_to_file - appends text at the end of a file
*@filename: name of the file
*@text_content: the terminated string to add at the end of the file
*Return: 1 if success -1 if error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, append_end;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);

		append_end = write(fd, text_content, len);
		if (append_end != len)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
}
