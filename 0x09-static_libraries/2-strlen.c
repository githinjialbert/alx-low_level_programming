#include "main.h"
/**
* _strlen - returns length of string
*@s: string
*Return: always 0
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
