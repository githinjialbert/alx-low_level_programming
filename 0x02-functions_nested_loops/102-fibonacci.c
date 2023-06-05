#include <stdio.h>
/**
*main - entry point to the program
*Return: always 0
*/
int main(void)
{
	int v = 0;
	long int c = 0, d = 1, next;

	while (v < 50)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%lu", next);
		if (v < 49)
		{
			printf(", ");
		}
		v++;
	}
	printf("\n");

	return (0);
}
