#include <stdio.h>
#include "main.h"
/**
*clear_bit - sets the value of bit to 0
*@n: pointer to the integer
*@index: index starting from 0 to the one you set
*Return: 1 if it works -1 when error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
