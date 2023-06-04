#include "main.h"
/**
*print_to_98 - prints all natural numbers
*@n: number variable
*Return: all numbers
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	printf("\n");
}
