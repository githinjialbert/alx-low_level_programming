#include <stdio.h>
#include "main.h"
/**
*get_bit - prints the value of a bit at a given index
*@n: no to be printed
*@index: index form 0 to where you want to get
*Return: the value of a bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int)* 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
