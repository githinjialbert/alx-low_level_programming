#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
*@s: string1
*@accept: string2
*Return: always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0;
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
			{
				q++;
			break;
		}
		else if (accept[w + 1] == '\0')
			return (q);
		}
		s++;
	}
	return (q);
}
