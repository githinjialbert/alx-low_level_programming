#include <stdio.h>
#include "main.h"
/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: pointer to the unsigned long int
*@index: index starting form 0 of the bit you set
*Return: 1 if success of -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
