#include "main.h"
#include <stdio.h>
/**
*print_last_digit -  prints the last digit of a number
*@c: the number
*Return: always 0
*/
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	putchar(last_digit + '0');

	return (last_digit);
}
