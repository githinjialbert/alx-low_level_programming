#include "main.h"
/**
*_strpbrk - find first occurence of any char
*@s: string 1
*@accept: string 2
*Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
				return (s);
		}
		s++;
	}
	return ('\0');
}
