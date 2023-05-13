#include <stdio.h>
#include "main.h"
/**
*flip_bits - return the no of bits you would flip
*@n: unsigned integer
*@m: unsigned integer
*Return: always 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int vi; 

	for (vi = 0; n || m; n >>= 1, m >>= 1)
	{
		if (( n & 1 ) != (m & 1))
			vi++;
	}
	return (vi);
}
