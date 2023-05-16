#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*get_endianness - it checks the endianness
*Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int u;
	char *v;

	u = 1;
	v = (char *) &u;

	return ((int)*v);
}
