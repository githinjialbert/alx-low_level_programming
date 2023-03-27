#include "main.h"
#include <stdio.h>
/**
*_puts -  prints a string
*@str:  new line
*Return: always 0
*/
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
			str++;
	}
	putchar('\n');
}
