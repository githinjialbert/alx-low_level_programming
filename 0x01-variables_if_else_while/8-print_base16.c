#include <stdio.h>
/**
*main - Entry point
*Description:Hexadecimal
*Return: always 0
*/
int main(void)
{
	int w;
	int r;

	for (w = 48; w <= 57; w++)
	{
		putchar(w);
	}
	for (r = 97; r <= 102; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
