#include "stdio.h"
/**
*main - entry point of the program
*Return: always 0
*/
int main(void)
{
	int v = 0;
	int sum = 0;

	while (v < 1024)
	{
		if (v % 3 == 0 || v % 5 == 0)
		{
			sum += v;
		}
		v++;
	}
	printf("%d\n", sum);
	return (0);
}
