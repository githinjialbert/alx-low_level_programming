#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_atoi - converts a string to integer value
*@s: string
*Return: always 0
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int y = 0;

	while (s[y] == ' ')
	{
		y++;
	}
	if (s[y] == '-')
	{
		sign = -1;
		y++;
	}
	else if (s[y] == '0')
	{
		y++;
	}
	while (s[y] >= '0' && s[y] <= '9')
	{
		result = result * 10 + (s[y] - '0');
			y++;
	}
	return (result * sign);
}

/**
*main - multiplies 2 no's
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int result, no1, no2;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);

	result = no1 * no2;
	{
		printf("%d\n", result);
	}
	return (0);
}
