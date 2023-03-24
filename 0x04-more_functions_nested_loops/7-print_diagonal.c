#include <stdio.h>
#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*@n: diagonal line
*Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int w;
		int j;

			for (w = 0; w < n; w++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == w)
					putchar('\\');
				else if (j < w )
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
