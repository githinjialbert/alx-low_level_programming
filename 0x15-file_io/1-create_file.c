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
	ssize_t o, r, w;

	if (filename == NULL )
		return (0);


