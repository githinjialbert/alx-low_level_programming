#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes from string 2
*Return: always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *v;
	unsigned int i = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
	{
		v = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		v = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!v)
		return (NULL);

	while (i < len1)
	{
		v[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		v[i++] = s2[k++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		v[i++] = s2[k++];
	}
	v[i] = ('\0');
	return (v);
}
