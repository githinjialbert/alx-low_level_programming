#include "main.h"
/**
*print_times_table - prints the n times table
*@n: the no to be printed
*Return: void
*/
void print_times_table(int n)
{
	int u, v, w;

	if (n <= 0 || n >= 15)
		return;

	for (u = 0; u <= n; u++)
	{
		for (v = 0; v <= n; v++)
		{
			w = u * v;

			if (v == 0)
			{
				putchar(w + '0');
			}
			else if (w < 10 && v != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(w + '0');
			}
			else if (w < 100 && w >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar((w / 10) + '0');
				putchar((w % 10) + '0');
			}
			else if (w >= 100)
			{
				putchar(',');
				putchar(' ');
				putchar((w / 100) + '0');
				putchar(((w / 10) % 10) + '0');
				putchar((w % 10) + '0');
			}
		}
		putchar('\n');
	}
}
