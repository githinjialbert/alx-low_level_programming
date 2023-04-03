#include "main.h"
#include <stdio.h>
/**
*_strchr -  locates a character in a string
*@s: string
*@c: character
*Return: always 0
*/
char *_strchr(char *s, char c)
{
	int longi = 0;

	for (; s[longi] >= '\0'; longi++)

	{
		if (s[longi] == c)
			return (&s[longi]);
	}
	return (0);
}
