#include <stdio.h>
/**
*main - prints all the arguments it recieves
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
