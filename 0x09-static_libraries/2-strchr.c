#include "main.h"
/**
*_strchr - search for c
*@s: string
*@c: letter
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
