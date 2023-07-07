#include <stdio.h>
#include "main.h"
/**
*binary_to_uint - converts a binary to a number
*@b: pointer to 0 and 1
*Return: zero when successful
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			result <<= 1;
		}
		else if (*b == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}

