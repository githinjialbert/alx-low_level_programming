#include "main.h"
#include <stdio.h>
/**
*swap_int -  swaps the values of two integers
*@a:num1
*@b:num2
*Return: always 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
		*a = *b;
	*b = temp;
}
