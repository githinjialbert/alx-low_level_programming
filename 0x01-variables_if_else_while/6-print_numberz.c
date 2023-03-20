#include <stdio.h>
/**
*main - Entry point
*Description: Numberz
*Return: always 0
*/
int main(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
		putchar(q + 48);
	}
	putchar('\n');
	return (0);
}
