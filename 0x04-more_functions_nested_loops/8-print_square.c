#include <stdio.h>
#include "main.h"
/**
*print_square -  prints a square
*@size: size of the square
*Return: void
*/
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int q;
		int y;

		for (q = 0; q < size; q++)
		{
			for (y = 0; y < size; y++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
