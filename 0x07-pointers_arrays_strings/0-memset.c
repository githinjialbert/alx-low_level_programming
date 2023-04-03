#include "main.h"
#include <stdio.h>
/**
*_memset - fills memory with a constant byte.
*@s: memory area
*@b: constant byte
*@n: bytes
*Return: always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
