#include "main.h"
#include <stdio.h>
/**
*_strpbrk -  searches a string for any of a set of bytes
*@s: string
*@accept: string
*Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return (0);
}
