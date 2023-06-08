#include <stdio.h>
#include <stdlib.h>
/**
*main - prints opcodes
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int n, v;
	char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	x = (char *)main;
	for (v = 0; v < n; v++)
	{
		if (v == n - 1)
		{
			printf("%02hhx\n", x[v]);
			break;
		}
		printf("%02hhx", x[v]);
		}
	return (0);
}

