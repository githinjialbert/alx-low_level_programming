#include "main.h"
#include <stdio.h>
/**
*_memcpy - copies memory area.
*@dest: memory area
*@src: memory area
*@n: number of btytes
*Return: always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int q = n;

	for (; i < q; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}
