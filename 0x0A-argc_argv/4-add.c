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
	int q, w;
	int sum = 0;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (q = 1; q < argc; q++)
	{
		s = argv[q];
		for (w = 0; s[w] != '\0'; w++)
		{
			if (s[w] < '0' || s[w] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(s);
		}
		printf("%d\n", sum);
	}
	return (0);
}
