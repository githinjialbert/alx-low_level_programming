#include <stdio.h>
#include "main.h"
/**
*print_line -  draws a straight line in the terminal
*@n: a straight line
*Return: void
*/
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int q;

		for (q = 1; q <= n; q++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
