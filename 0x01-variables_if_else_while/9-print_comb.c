#include <stdio.h>
/**
*main - Entry point
*Description: persistence makes an unbeatable combination for success
*Return: always 0
*/
int main(void)
{
	int y;

	for (y = 48; y <= 57; y++)
	{
		putchar(y);
		if (y == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
