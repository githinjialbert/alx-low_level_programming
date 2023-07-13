#include "main.h"
/**
*createBuffer - creates a storage from the buffer
*@name: the name of the file to store the chars
*Return: a pointer
*/
char *createBuffer(char *name)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, 
				"Error: Can't write to %s\n", name);
		exit(99);
	}
	return (buff);
}
/**
*closeFile - it closes the file
*@file: the file
*Return: always 0
*/
void closeFile(int file)
{
	int v;
	
	v = close(file);
	
	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	
	buff = createBuffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	do{
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, 
					"Error: Can't read from %s\n", argv[2]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, 
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);
	free(buff);
	closeFile(from);
	closeFile(to);
	return (0);
}
