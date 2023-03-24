#include <stdio.h>
#include "main.h"
/**
*more_numbers - prints 10 times the numbers
*Return: void
*/
void more_numbers(void)
{
	int g;
	int v;

	for (g = 0; g <= 0; g++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v > 10)
			{
				putchar((v / 10) + 0);
			}
			putchar ((v % 10) + 0);
		}
		putchar('\n');
	}
}
