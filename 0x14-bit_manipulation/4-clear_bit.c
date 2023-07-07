#include "main.h"
#include <stdio.h>
/**
*clear_bit - sets the value of a bit to 0
*@index: index starting from 0
*@n: the number to be set
*Return: always 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
