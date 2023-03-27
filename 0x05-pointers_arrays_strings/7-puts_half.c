#include "main.h"
#include <stdio.h>
/**
*puts_half -  prints half of a string
*@str: string
*Return: always 0
*/
void puts_half(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;
	i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;

	for (; i < count; i++)
		putchar(str[i]);
	putchar('\n');
}
