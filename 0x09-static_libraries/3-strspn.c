#include "main.h"
/**
*_strspn - calculates length of string
*@s: string 1
*@accept: string 2
*Return: always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				k++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}

