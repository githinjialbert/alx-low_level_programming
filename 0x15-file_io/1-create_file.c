#include "main.h"
/**
*create_file - creates a file
*@filename: the name of the file
*@text_content: the string to write to the file
*Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	int Byteswritten;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		Byteswritten = write(file, text_content, strlen(text_content));
	}
	if (Byteswritten == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
