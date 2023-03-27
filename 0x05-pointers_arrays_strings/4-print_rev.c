#include "main.h"
#include <stdio.h>
/**
*print_rev -  prints a string, in reverse
*@s:string
*Return: always 0
*/
void print_rev(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
