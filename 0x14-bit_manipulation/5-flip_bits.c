#include "main.h"
#include <stdio.h>
/**
*flip_bits - returns the number of bits
*@n: the number to be flipped
*@m: the number of bits to be returned
*Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int hesabu = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
		{
			hesabu++;
		}
		diff >>= 1;
	}
	return (hesabu);
}
