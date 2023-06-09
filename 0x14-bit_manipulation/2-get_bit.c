#include "main.h"
#include <stdio.h>
/**
*get_bit - gets the value of a bit at a given index
*@index: the index starting from 0
*@n: the number
*Return: always 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
