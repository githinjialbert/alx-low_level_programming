#include "main.h"
#include <stdio.h>
/**
*print_array -  elements of an array of integers
*@a:num1
*@n:number of elements
*Return: always 0
*/
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
