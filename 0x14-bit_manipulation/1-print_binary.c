#include "main.h"
#include <stdio.h>
/**
*print_binary - prints the binary rep of a number
*@n: the number
*Return: always 0
*/
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		print_binary(n >> 1);
		putchar((n & 1) + '0');
	}
	else
		putchar ('0');
}
