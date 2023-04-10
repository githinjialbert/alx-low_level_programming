#include "main.h"
#include <stdio.h>
/**
*_strncat - concatenates two strings.
*@dest: copy to
*@src: move to
*@n: bytes
*Return: always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest = '\0';
	return (dest);
}

