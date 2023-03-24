#include <stdio.h>
#include "main.h"
/**
*print_numbers -  prints 0-9
*Return: void
*/
void print_numbers(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
	}
	putchar('\n');
}
