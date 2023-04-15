#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*main - it adds positive numbers
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int i, v;
	int sum = 0;
	char *a;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		a = argv[i];
	}
	for (v = 0; a[v] != '\0'; v++)
	{
		if (a[v] < '0' || a[v] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(a);
	}
	printf("%d\n", sum);
	return (0);
}
