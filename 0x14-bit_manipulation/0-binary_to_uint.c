#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_to_uint - converts a binary to an unsigned int
*@b: a pointer to a string
*Return: always 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int no = 0;
	int v;

	if (b == NULL)
		return (0);
	for (v = 0; b[v] != '\0'; v++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		no <<= 1;
		if (b[v] == '1')
		{
			no |= 1;
		}
	}
	return (no);
}
