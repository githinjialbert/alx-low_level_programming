#include "main.h"
#include <stdio.h>
/**
*get_endianness - checks the endianness
*Return: 0 if big endian 1 if small
*/
int get_endianness(void)
{
	unsigned int no = 1;
	char *final = (char *)&no;

	if (*final == 1)
	{
		return (1);
	}
	else
		return (0);
}

